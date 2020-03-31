#include <bits/stdc++.h>
using namespace std;

int func(int a, int b) {
	return a > b;
}

int v[51];
int n, a1, a2, c2;

int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> v[i];
	}
	sort(v, v+n, func);
	for(int i=0; i<n; i++) {
		if((a2 < a1) and (c2 < (n/2))) {
			a2 += v[i];
			c2++;
		}else
			a1 += v[i];
	}
	cout << (max(a1, a2) - min(a2, a1)) << endl;
	return 0;
}