#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, p, q, r, sum;

	cin >> t;

	while(t--) {
		cin >> n >> p >> q >> r;
		sum =0;
		for(int i=1; i<=n; i++) {
			if(i%p==0 and i%q!=0 and i%r!=0) {
				sum++;
			}
			if(i%q==0 and i%p!=0 and i%r!=0) {
				sum++;
			}
			if(i%r==0 and i%q!=0 and i%p!=0) {
				sum++;
			}
		}
		if(sum) {
			cout << sum << endl;
		}else {
			cout << "0" << endl;
		}
	}
	return 0;
}