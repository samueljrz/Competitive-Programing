#include <bits/stdc++.h>
using namespace std;
int main () {
    float a, b, ans;
    cin >> a;
    cin >> b;
    ans = ((a*2)+(b*3))/5;
    if(ans >= 7) {
        cout << "Aprovado" << endl;
    }else if(ans < 3) {
        cout << "Reprovado" << endl;
    }else
        cout << "Final" << endl;
    return 0;
}
