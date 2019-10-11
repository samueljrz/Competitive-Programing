#include <bits/stdc++.h>
using namespace std;

int a, b, c, ans;

int main () {

	cin >> a;
	cin >> b;
	cin >> c;

	a = max(a, b);
	ans = max(a, c);

	cout << ans << endl;
	return 0;
}