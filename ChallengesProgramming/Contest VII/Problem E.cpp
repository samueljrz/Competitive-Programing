#include <bits/stdc++.h>

using namespace std;

const int MAXX = 1e6+10;
int minNumber[MAXX];

int main() {
    int t;
    cin >> t;

    memset(minNumber, MAXX, sizeof minNumber);
    minNumber[0] = 0;
    for(int i=2; i < MAXX; i++)
        for(auto c: {2, 3, 5, 7})
            if(c <= i) minNumber[i] = min(minNumber[i], minNumber[i-c] + 1);

    for(int i=0; i < MAXX; i++) 
        if(minNumber[i] >= MAXX) minNumber[i] = -1;

    int x;
    while(t--) {
        cin >> x;
        cout << minNumber[x] << endl;
    }
}
