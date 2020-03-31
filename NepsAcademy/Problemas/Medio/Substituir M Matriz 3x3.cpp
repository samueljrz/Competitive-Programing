#include<bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int mtz[3][3];

int main() {
	int m=-INF;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cin >> mtz[i][j];
			m = max(m, mtz[i][j]);
		}
	}
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(mtz[i][j] == m) mtz[i][j] = -1;
			if(j == 2) cout << mtz[i][j];
			else cout << mtz[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}