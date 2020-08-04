#include <bits/stdc++.h>
using namespace std;

int bsearch(int x, int y, int a, int b, int c, int d) {
	int ans=0;
	while(x <= y) {
		int mid = (y+x)/2;
		int exp = (a*(mid*mid) + b*(mid) + c);
		if(exp >= d) {
			y = mid-1;
			ans = mid;
		}else {
			x = mid+1;
		}
	}
	return ans;
}	

int main() {
	int t, a, b, c, d;

	cin >> t;

	while(t--) {
		cin >> a >> b >> c >> d;

		int upper = ceil(sqrt(d/a));

		cout << bsearch(0, upper, a, b, c, d) << endl;
	}

	return 0;
}