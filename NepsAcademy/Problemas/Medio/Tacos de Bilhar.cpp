#include <bits/stdc++.h>
using namespace std;

int x, aux, ans, tacos[1000001];

int main () {

	cin >> x;
	memset(tacos, 0, sizeof(int));

	for(int i=0; i<x; i++) {
		cin >> aux;
		if(tacos[aux] > 0) {
			tacos[aux]--;
		}else {
			tacos[aux]++;
			ans += 2;
		}
	}
	cout << ans << endl;
	return 0;
}