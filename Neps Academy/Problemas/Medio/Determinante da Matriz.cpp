#include <bits/stdc++.h>
using namespace std;

int mtz[3][3];

int det(int mtz[][3]) {
	int a, b;
	a = mtz[0][0]*mtz[1][1]*mtz[2][2]+mtz[0][1]*mtz[1][2]*mtz[2][0]+mtz[0][2]*mtz[1][0]*mtz[2][1];
	b = mtz[0][0]*mtz[1][2]*mtz[2][1]+mtz[0][1]*mtz[1][0]*mtz[2][2]+mtz[0][2]*mtz[1][1]*mtz[2][0];
	return (a - b);
}

int main() {
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cin >> mtz[i][j];
		}
	}
	cout << det(mtz) << endl;
	return 0;
}