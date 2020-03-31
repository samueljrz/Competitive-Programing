#include <bits/stdc++.h>
using namespace std;

int n, s, v[32], aux, ans=88888888, ant;

int main () {

	cin >> n >> s;
	v[0] = s;

	for(int i=1; i<=n; i++) {
		cin >> aux;
		v[i] = v[i-1] + aux;
	}

	for(int i=1; i<=n; i++) {
			ant = min(v[i-1], v[i]);
			ans = min(ant, ans);
	}
	cout << ans << endl;	
	return 0;
}