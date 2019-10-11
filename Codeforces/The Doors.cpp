#include <bits/stdc++.h>
using namespace std;

int n, v, fim1, fim0;

int main () {

	cin >> n;

	for(int i=1; i<=n; i++) {
		cin >> v;
		if(v == 0) {
			fim0 = i;
		}else
			fim1 = i;
	}

	cout << min(fim0, fim1) << endl;
	return 0;
}