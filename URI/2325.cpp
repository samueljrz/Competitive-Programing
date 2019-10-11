#include <bits/stdc++.h>
using namespace std;

map<int, int> instalados, baixados;
map<int, int>::iterator iti, itb;
int n, m, aux1, aux2;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> m >> n;
	for(int i=0; i<m; i++) {
		cin >> aux1 >> aux2;
		instalados.insert(make_pair(aux1, aux2));
	}
	for(int i=0; i<n; i++) {
		cin >> aux1 >> aux2;
		iti = instalados.find(aux1);
		itb = baixados.find(aux1);
		if(iti == instalados.end() and itb == baixados.end()) {
			baixados.insert(make_pair(aux1, aux2));
			instalados.insert(make_pair(aux1, aux2));
		}else if(iti != instalados.end() and itb == baixados.end() and aux2 > (*iti).second) {
			baixados.insert(make_pair(aux1, aux2));
		}else if(iti != instalados.end() and itb != baixados.end() and aux2 > (*itb).second) {
			baixados[aux1] = aux2;
		}
	}	
	for(auto it=baixados.begin(); it != baixados.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	return 0;
}

