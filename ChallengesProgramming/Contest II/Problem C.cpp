#include <bits/stdc++.h> 
using namespace std;

int main() {
	int x, y, a, b, c, ans=0;
	cin >> x;

	for(int i=0; i<x; i++) {
		cin >> y;
		for(int i=0; i<y; i++) {
			cin >> a >> b >> c;
			ans+= a*c;
		}
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}