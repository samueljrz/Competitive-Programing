#include <bits/stdc++.h>
using namespace std;

int v1[10101];
int v2[10101];
int vaux[10101];
int carry;
int x, y, aux;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> x >> y;
	for(int i=0; i<x; i++) {
		cin >> v1[i];
	}
	for(int i=0; i<y; i++) {
		cin >> v2[i];
	}
	aux = max(x, y);

	for(int i=aux-1; i>=0; i--) {
		int aux1;
		aux1 = carry + v1[i] + v2[i];
		if(aux1 == 0) {
			carry = 0;
		}else if(aux1 == 1) {
			carry = 0;
		}else if(aux1 == 2) {
			carry = 1;
		}else if(aux1 == 3) {
			carry = 1;
		}
		vaux[i] = aux1 % 2;
	}

	while(vaux[aux-1] == 0) {
		aux--;	
	}

	for(int i=0; i<aux; i++) {
		/*if(carry == 1) {
			cout << "1 ";
			carry = 0;
		}*/
		cout << vaux[i];
		if(i != aux-1) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}