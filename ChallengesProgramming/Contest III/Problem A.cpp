#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int main() {
	int t, n, k, v;

	cin >> t;

	while(t--) {
		cin >> n >> k;
		for(int i=0; i<n; i++) {
			cin >> v;
			a.push_back(v);
		}
		sort(a.begin(), a.end());
		if(k < a[0]) {
			cout << '0' << endl;
		}else {
			cout << (k - a[0]) << endl;
		}
		a.clear();
	}

	return 0;
}