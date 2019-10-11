#include <bits/stdc++.h>
using namespace std;

int n, par, imp, aux;

int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> aux;
		if(aux%2==0) par++;
		else imp++;
	}
	cout << min(par, imp) << endl;
	return 0;
}