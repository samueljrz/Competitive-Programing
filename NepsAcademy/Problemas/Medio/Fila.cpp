#include <bits/stdc++.h>
using namespace std;

vector<int> fila, aux;
vector<int>::iterator it;
int n, qtdop, aux1, aux2, aux3, ac;


int main() {
//	cin.tie(0);
//	ios_base::sync_with_stdio(0);

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> aux1;
		fila.push_back(aux1);
	}

	cin >> qtdop;
	
	for(int i=0; i<qtdop; i++) {
		cin >> aux1;
		cin >> aux2;
		cin >> aux3;
		if(aux1 == 0) { 	
			it = fila.begin() + aux2;
			fila.insert(it, aux3);
		}else if(aux1 == 1) {
			int k = aux2 - 1;
			int d = aux3;
			int ans = d + fila[k];
			while(k--) {
				if(fila[k] > ans) {
					aux.push_back(k+1);
					break;
				}else if(k == 0) {
					aux.push_back(0);
				}
			}
		}
	}
	for(int i=0; i<aux.size(); i++) {
		cout << aux[i] << endl;
	}
	return 0;
}