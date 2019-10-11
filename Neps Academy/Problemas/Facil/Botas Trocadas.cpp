#include <bits/stdc++.h>
using namespace std;

int e[32], d[32], n, aux, ans=0;
char c; 

int main() {
	cin >> n;
	memset(e, 0, sizeof(int));
	memset(d, 0, sizeof(int));
	for(int i=0; i<n; i++) {
		cin >> aux >> c;
		if(c == 'D') {
			if(e[aux-30] > 0) {
				e[aux-30]--;
				ans++;
			}else {
				d[aux-30]++;
			}
		}else {
			if(d[aux-30] > 0) {
				d[aux-30]--;
				ans++;
			}else {
				e[aux-30]++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}