#include <bits/stdc++.h>
using namespace std;

int main() {
	char mtx[5][5];
	bool ver=false;
	int hash=0;
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			cin >> mtx[i][j];
		}
	}
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(mtx[i][j] == '#') {
				hash++;
			}
			if(mtx[i][j+1] == '#') {
				hash++;
			}
			if(mtx[i+1][j] == '#') {
				hash++;
			}
			if(mtx[i+1][j+1] == '#') {
				hash++;
			}
			if(hash != 2) {
			ver = true;
			break;
			}
			hash=0;
		}
		if(ver) break;
	}
	if(ver) {
		cout << "YES" << endl;
	}else
		cout << "NO" << endl;
	return 0;
}