#include <bits/stdc++.h>
using namespace std;

int l1, l2, l3;

int main() {
    for(int i=0; i<9; i++) {
        cin >> aux;
        if(i>=0 and <=2) {
            l1+= aux;
        }
        if(i>=3 and <=5) {
            l2+= aux;
        }
        if(i>=6 and <=8) {
            l3+= aux;
        }
    }
    for(int i=1; i<=3; i++) {
        if(i = 1) {
        	cout << "linha" << i << ":" << l1 << endl;
        }
        if(i = 2) {
        	cout << "linha" << i << ":" << l2 << endl;
        }
        if(i = 2) {
        	cout << "linha" << i << ":" << l2 << endl;
        }
   return 0;
}