#include <bits/stdc++.h>
using namespace std;

int A[100001];
int B[100001];

int main() {
	int t, n;

	cin >> t;

	while(t--) {
		cin >> n;

		for(int i=0; i<n; i++) {
			cin >> A[i];
		}

		for(int i=0; i<n; i++) {
			cin >> B[i];
		}

		int l, r, ans=0;
		for(int i=0; i<n; i++) {
			l = i;
			r = n-1;
			while(l <= r) {
				int mid = (l+r)/2;
				if(B[mid] >= A[i]) {
					ans = max(mid-i, ans);
					l = mid+1;
				}else {
					r = mid-1;
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}