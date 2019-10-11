#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010

int n, m, componente, num_componentes;
vector<int> grafo[1000];
int paint[MAXN];

void DFS(int v) {
	for(int i=0; i<(int)grafo[v].size(); i++) {
		int x = grafo[v][i];
		if(paint[x] == 0) {
			paint[x] = paint[v];
			DFS(x);
		}
	}
}

int main() {
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
	}

	for(int i=1; i<=n; i++) {
		if(paint[i] == 0) {
			num_componentes++;
			paint[i] = num_componentes;
			DFS(i);
		}
	}
	cout << num_componentes << endl;
	return 0;
}