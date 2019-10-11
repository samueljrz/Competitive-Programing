#include <bits/stdc++.h>
using namespace std;

#define DEBUG false
#define dbf if (DEBUG) printf

#define fori(i, x, y) for(int i=(int)(x); i<(int)y; i++)
#define ford(i, x, y) for(int i=(int)(x); i>=(int)y; i--)
#define F first
#define S second
#define pb push_back
#define sz size
#define mp make_pair
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3fLL
#define ms(x, v) memset((x), (v), sizeof(x))
#define fl(x, v) fill(x.begin(), x.end(), v)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (( (a)/__gcd((a), (b)) )*(b))

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<pii> vpii;

const double EPS = 1e-9;
const double PI = acos(-1);
int tree[400005];
int arr[100003];

int vall(int x) {
	return(x>0?1 : (x<0? -1:0));
}

void construct(int *arr, int *tree, int low, int high, int node) {
	if(low == high) {
		tree[node] = vall(arr[low]);
		return;
	} 
	else {
		int mid = (low + high)/2;
        construct(arr, tree, low, mid, 2*node);
        construct(arr, tree, mid+1, high, 2*node+1);
        tree[node] = tree[2*node] * tree[2*node+1];
        // tree[node] = tree[2*node]>=tree[2*node+1] ? tree[2*node+1]:tree[2*node]; //minimum query
    
	}
}

void update(int *arr, int *tree, int low, int high, int node, int idx, int val) {
	if(idx > high || idx < low) return;
	if(low == high && high == idx) {
		tree[node] = vall(val);
		return;
	}else {
		int mid = (high + low)/2;
		if(low <= idx and idx <= mid) update(arr, tree, low, mid, 2*node, idx, val);
		else update(arr, tree, mid+1, high, 2*node+1, idx, val);
		tree[node] = tree[2*node] * tree[2*node+1];
		// tree[node] = tree[2*node]>=tree[2*node+1] ? tree[2*node+1]:tree[2*node]; //minimum query
	}
}

int query(int *tree, int low, int high, int node, int l, int r) {
	if(low > r or l > high) return 1;  // INT_MAX //minimum query
	if(low >= l and high <= r) return tree[node];
	int mid = (low + high)/2;
	int p1 = query(tree, low, mid, 2*node, l, r);
	int p2 = query(tree, mid+1, high, 2*node+1, l, r);
	return (p1 * p2);
	// return p1>=p2 ? p2:p1 //minimum query
}

int main() { 
	if(!DEBUG){
		ios_base::sync_with_stdio(false); 
		cin.tie(NULL);
	}
	int n, k;
	long long size, h;
	int ax, ay;
	char d;
	while (cin >> n >> k) {
		fori(j, 1, n+1) {
			cin >> arr[j];
		}
		memset(tree, 1, sizeof(tree));  // INT_MAX minimum query
		construct(arr, tree, 1, n, 1);
		for(int j=0; j<k; j++) {
			cin >> d >> ax >> ay;
 			if(d == 'C') {
				update(arr, tree, 1, n, 1, ax, ay);
			}
			if(d == 'P') {
				int ans = query(tree, 1, n, 1, ax, ay);
				cout << (ans==1? '+':(ans==0?'0':'-'));
			}
		}
		cout << endl;
	}
	return 0;
}
