#include <bits/stdc++.h> 
using namespace std;

set< pair<int, int> > ans;
int n, m;
pair<int, int> aux;
pair<int, int> aux2;
vector<int> w;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		aux = make_pair(b, c);
		aux2 = make_pair(c, b);
		if(a == 0) {
			if(ans.find(aux) == ans.end()) {
				w.push_back(0);	
			}else
				w.push_back(1);
		}else
			ans.insert(aux);
			ans.insert(aux2);
	}
	for(int i=0; i<w.size(); i++) {
		cout << w[i] << endl;
	}
	return 0;
}