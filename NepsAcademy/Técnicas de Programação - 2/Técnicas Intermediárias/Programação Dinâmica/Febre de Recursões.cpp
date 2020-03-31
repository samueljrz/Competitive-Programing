#include <bits/stdc++.h>
using namespace std;

int n, k, m;
long long dp[1001];
long long a[1001];

long long solve(int k) {
	if(dp[k] != -1) return dp[k];

	long long result = 0;
	for(int i=1; i<=n; i++) {
		result += a[i] * solve(k-i);
		result = result % m;
	}
	return dp[k] = result;
}

int main() {
	cin >> n >> k >> m;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	memset(dp, -1, sizeof(dp));
	for(int i=1; i<=n; ++i) {
		cin >> dp[i];
		dp[i] = dp[i] % m;
	}
	cout << solve(k) % m << endl;
	return 0;
}