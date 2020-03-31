#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int mtz[101][21];
	int vec[101];
	int x, max, aux=0;

	cin >> x;

	for(int i=0; i<x; i++) {
		cin >> vec[i];
		for(int j=0; j<vec[i]; j++) {
			cin >> mtz[i][j];
		}
	}

	for(int i=0; i<x; i++) {
		sort(mtz[i], mtz[i]+vec[i]);
			for(int j=0; j<vec[i]; j++) {
				if(j) aux+=abs(mtz[i][j]-mtz[i][j-1]);
			}
		aux+=abs(mtz[i][vec[i]-1]-mtz[i][0]);
		max = aux;
		cout << max << endl;
	}
	return 0;
}