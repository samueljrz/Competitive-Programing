#include <bits/stdc++.h> 
using namespace std;

//set< pair<int, pair <int, int> > > ans;
//map<int, vector<int> > ans;
int n, m;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	vector<int> r;
	while(cin >> n >> m) {
		vector< int > ans[1000001]; 
		for(int i=1; i<=n; i++) {
			int aux; 
			cin >> aux;
			ans[aux].push_back(i);
		}
		for(int i=0; i<m; i++) {
			int aux1, aux2;
			cin >> aux1 >> aux2;
			if(ans[aux2].size() < aux1) {
				r.push_back(0);
			}else
				r.push_back(ans[aux2][aux1-1]);
		}
	}
	for(int i=0; i<r.size(); i++) {
			cout << r[i] << endl;
	}
	return 0;
}
