#include <bits/stdc++.h>
using namespace std;

int n, h, c, aux;

int main() {
	cin >> n >> h;
	for(int i=0; i<n; i++) {
		cin >> aux;
		if(aux > h) {
			c += 2;
		}else
			c += 1;
	}
	cout << c << endl;
	return 0;
}