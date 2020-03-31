#include <bits/stdc++.h>
using namespace std;
int main () {
    int x;
    cin >> x;
    cout << x+1;
    for(int i=2; i<=10; i++) {
        cout << " " << x+i;
    }
    return 0;
}