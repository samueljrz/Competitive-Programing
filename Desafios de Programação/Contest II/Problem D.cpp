#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
	int a = x, ans=0;
	while(a != 0) {
		ans+=a%10;
		a/=10;
	}
	if(ans < 10) return ans;
	else return solve(ans);
}

int main() {
	vector<int> ct;
	int x;

	while(1) {
		cin >> x;
		if(x == 0) break;
		else ct.push_back(x);
	}
	for(int i=0; i<ct.size(); i++) {
		if(ct[i] < 0) cout << ct[i] << endl;
		else cout << solve(ct[i]) << endl;
	}
	return 0;
}