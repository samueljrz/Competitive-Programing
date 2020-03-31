#include <bits/stdc++.h>
using namespace std;

int main () {

        int n,vecint[100001],aux=0,aux1=0;

        cin >> n;

        for (int i = 0; i < n; ++i){
                cin >> vecint[i];
        }

        for (int j = 0; j < n; ++j){
                
                aux=vecint[j]|aux;
                
                if (aux1<aux){
                        aux1=aux;
                }
        }

        cout << aux1 << "\n";

        return 0;
}