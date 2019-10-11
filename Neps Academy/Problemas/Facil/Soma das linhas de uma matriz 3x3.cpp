#include <bits/stdc++.h>
using namespace std;

int l1, l2, l3, aux;

int main() {
    for(int i=0; i<9; i++) {
        cin >> aux;
        if(i>=0 and i<=2) {
            l1+= aux;
        }
        if(i>=3 and i<=5) {
            l2+= aux;
        }
        if(i>=6 and i<=8) {
            l3+= aux;
        }
    }
    for(int i=0; i<3; i++) {
        if(i == 0) {
        	cout << "Linha " << i << ": " << l1 << endl;
        }
        if(i == 1) {
        	cout << "Linha " << i << ": " << l2 << endl;
        }
        if(i == 2) {
        	cout << "Linha " << i << ": " << l3 << endl;
        }
    }
   return 0;
}