#include <bits/stdc++.h>
using namespace std;

int main() {
	int mtz[6][6], ans=0, si, sj;
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=5; j++) {
			cin >> mtz[i][j];
			if(mtz[i][j] == 1) {
				si = i;
				sj = j;
			}
		}
	}
	if(si > 3) {
		ans += si - 3;
	}else {
		ans += 3 - si;
	}
	if(sj > 3) {
		ans += sj - 3;
	}else {
		ans += 3 - sj;
	}
	cout << ans << endl;
	return 0;
}