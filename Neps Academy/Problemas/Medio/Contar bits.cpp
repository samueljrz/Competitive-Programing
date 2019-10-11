#include <bits/stdc++.h>
using namespace std;

long long int n, ans;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	while(n>0) {
		if(n%2) {
			ans++;
		}
		n /= 2;
	} 
	cout << ans << endl;
	return 0;
}
