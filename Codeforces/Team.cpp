#include <bits/stdc++.h>
using namespace std;

int a, b, c, ans, n;

int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a >> b >> c;
		if((a+b+c) > 1) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}	