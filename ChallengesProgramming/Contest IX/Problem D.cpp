#include <bits/stdc++.h>
using namespace std;

vector<int> a;
const int lg = 30, maxt = 5e5 * lg;
int q, t[maxt][2], sz = 1;

void insert(int x){
	int p = 0;
	for(int i = lg - 1; i >= 0; i--){
		if(!t[p][x >> i & 1])
			t[p][x >> i & 1] = sz++;
		p = t[p][x >> i & 1];
	}
}
int get(int x){
	int ans = 0, p = 0;
	for(int i = lg - 1; i >= 0; i--){
		bool me = (x >> i & 1);
		if(t[p][me])
			p = t[p][me];
		else
			p = t[p][!me], ans |= 1 << i;	    
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	insert(0);
	int q, ans = 0;
	cin >> q;
	a.push_back(0);
	while(q--) {
		int x, aux;
		cin >> x;
		switch(x) {
			case 1: 
				cin >> aux;
				insert(aux ^ ans);
				break;
			
			case 2:
				cin >> aux;
				ans ^= aux;
				break;

			case 3: 
				cout << get(ans) << '\n';
				break;

			default:
				return 0;
		}
	}
	return 0;
}

