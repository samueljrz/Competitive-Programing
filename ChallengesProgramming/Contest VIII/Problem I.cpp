#include <bits/stdc++.h>
using namespace std;

vector<int> aux[1000001];
int l[1000001], v[1000001], dist[1000001];

void bfs(int src) {
	queue<int> q;
	q.push(src);
	v[src] = 1;
	dist[src] = 0;

	while(!q.empty()) {
		int curr = q.front();
		q.pop();

		for(int child : aux[curr]) {
			if(v[child] == 0) {
				dist[child] = dist[curr] + 1;
				q.push(child);
				v[child] = 1;
				l[dist[child]]++;
			}
		}
	}
}

int main() {
	int n, m, a, b, src, d, q;
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		cin >> a >> b;
		aux[a].push_back(b), aux[b].push_back(a);
	} 
	cin >> q;
	while(q--) {
		cin >> src >> d;
		for(int i=0; i<=n; i++) {
			l[i] = 0, v[i] = 0;
		}
		bfs(src);
		cout << l[d] << endl;
	}
}