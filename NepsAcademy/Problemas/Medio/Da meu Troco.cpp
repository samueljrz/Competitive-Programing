#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010
#define INF 0x3f3f3f3e;

int dp[MAXN][MAXN];
int n, m, moedas[1010];

int solve(int idx, int val) {
	if(val < 0) return INF;
	if(dp[n][0] == 0) return 0;
	if(dp[n][val] > 0) return INF;
	if(dp[idx][val] == -1) {
		dp[idx][val] = min(1+solve(idx, val-moedas[idx]), solve(idx+1, val));
	}
	return dp[idx][val];
}

int main() {
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		cin >> moedas[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << solve(0, m) << endl;
}