#include <bits/stdc++.h>
using namespace std;

int a[10001];

int main() {
	int n, sum=0, v;

	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	for(int i=0; i<n-1; i++) {
		if(a[i] <= a[i+1]) {
			a[i+1] -= a[i];
			a[i] = 0;
		}else {
			cout << "NO" << endl;
			return 0;
		}
	}
	for(int i=0; i<n; i++) {
		if(a[i] != 0) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}