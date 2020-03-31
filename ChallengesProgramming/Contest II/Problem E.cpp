#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, atual=0, anterior=0, aux, pb=0, pa=0;
	cin >> x;
	for(int i=0; i<x; i++) {
		cin >> y;
		for(int j=0; j<y; j++) {
			anterior = atual;
			cin >> aux;
			atual = aux;
			if(j>0 and j<y) {
				if(atual > anterior) pa++;
				else if(atual < anterior) pb++;
			}
		}
		if(i == 0) cout << "Case " << i+1 << ": " << pa << " " << pb;
		else cout << endl << "Case " << i+1 << ": " << pa << " " << pb;
		pa = pb = 0;
	}
	cout << endl;
	return 0;
}