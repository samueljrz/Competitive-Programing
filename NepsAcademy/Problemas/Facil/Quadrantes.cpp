#include <bits/stdc++.h>
using namespace std;
int main () {
    int x, y;
    cin >> x;
    cin >> y;
    if(x == 0 or y == 0) {
        cout << "eixos" << endl;
    }else if(x > 0 and y > 0) {
        cout << "Q1" << endl;
    }else if(x < 0 and y > 0) {
        cout << "Q2" << endl;
    }else if(x < 0 and y < 0) {
        cout << "Q3" << endl;
    }else if(x > 0 and y < 0) {
        cout << "Q4" << endl;
    }
    return 0;
}

