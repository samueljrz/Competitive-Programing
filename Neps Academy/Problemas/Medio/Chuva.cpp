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
#define MAX 100001

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

int vec[MAX];
bool e[MAX], d[MAX];

int main() {
	if(!DEBUG){
		ios_base::sync_with_stdio(false); 
		cin.tie(NULL);
	}
	int n;
	cin >> n;
	fori(i, 0, n) {
		cin >> vec[i];
	}
	int me = vec[0];
	fori(i, 1, n) {
		if(me > vec[i]) e[i] = true;
		me = max(me, vec[i]);
	}
	int md = vec[n-1];
	ford(i, n-2, 0) {
		if(md > vec[i]) d[i] = true;
		md = max(md, vec[i]);
	}
	int ans = 0;
	fori(i, 1, n-1) {
		if(d[i] and e[i]) ans++;
	}
	cout << ans << endl;
	return 0;
}