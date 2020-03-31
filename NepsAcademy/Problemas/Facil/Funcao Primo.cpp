#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, aux=0;
    cin >> n;
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            aux++;
        }
    }
    if((aux > 2) or (aux == 1)) {
        cout << 'N' << endl;
    }else
        cout << 'S' << endl;
    return 0;
}