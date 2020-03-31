#include <bits/stdc++.h>
using namespace std;

int mtz[1001][1001];
int n, m, passos, tst;
pair<int, int> ini;

bool DFS(pair<int, int> x) {
	int ans=0;
	if(mtz[x.first-1][x.second]) {
		pair<int, int> temp;
		temp = make_pair(x.first-1, x.second);
		passos++;
		DFS(temp);
	}else if(mtz[x.first][x.second-1]) {
		pair<int, int> temp;
		temp = make_pair(x.first, x.second-1);
		passos++;
		DFS(temp);
	}else if(mtz[x.first][x.second+1]) {
		pair<int, int> temp;
		temp = make_pair(x.first, x.second+1);
		passos++;
		DFS(temp);
	}else if(mtz[x.first+1][x.second]) {
		pair<int, int> temp;
		temp = make_pair(x.first+1, x.second);
		passos++;
		DFS(temp);
	}else 
		return false;
	return true;
}

int main() {
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			int aux;
			cin >> aux;
			mtz[i][j] = aux;
			if(aux == 2) ini = make_pair(i, j);
		}
	}
	if(DFS(ini))
	cout << passos << endl;
	return 0;
}