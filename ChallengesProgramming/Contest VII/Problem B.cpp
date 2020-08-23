#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[200010];

int main() {

	int i, j, n;

	cin >> n;

	for(i = 1; i <= n; ++i) {
		cin >> a[i];
		if(a[i]&1)	a[i] = -1;
		else	a[i] = 1;
	}

	map<int, int> mp;
	mp[0]++;

	ll ans = 0;

	for(i = 1; i <= n; ++i) {
		a[i] += a[i - 1];
		ans += mp[a[i]];
		mp[a[i]]++;
	}

	cout << ans << endl;

	return 0;

}
