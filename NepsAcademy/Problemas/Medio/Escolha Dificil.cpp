#include <bits/stdc++.h>
using namespace std;

int ax, bx, cx, ay, by, cy, ans;

int main() {
	cin >> ax >> bx >> cx;
	cin >> ay >> by >> cy;

	if(ax < ay) {
		ans += (ay - ax);
	}
	if(bx < by) {
		ans += (by - bx);
	}
	if(cx < cy) {
		ans += (cy - cx);
	}
	cout << ans << endl;
	return 0;
}