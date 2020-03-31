#include <bits/stdc++.h>
using namespace std;

set<int> frequencia;
int n, aux;

int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> aux;
		if(frequencia.find(aux) == frequencia.end()) {
			frequencia.insert(aux);
		}
	}
	cout << frequencia.size() << endl;
	return 0;
}
