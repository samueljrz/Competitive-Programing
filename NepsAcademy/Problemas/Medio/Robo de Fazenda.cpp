#include <bits/stdc++.h>
using namespace std;

int v[1001];
int n, c, s, aux, ans;

int main() {
	cin >> n >> c >> s;
	aux = 1;
	for(int i=0; i<c; i++) {
		cin >> v[i];
	}
	for(int i=0; i<c; i++) {
		if(aux==s) {
			ans++;
		}
		aux += v[i];
		if(aux == 0) {
			aux = n;
		}
		if(aux == (n+1)) {
			aux = 1;
		}
	}
	if(aux==s) {
		ans++;
	}
	cout << ans << endl;
	return 0;
}
