#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int c;
    if(n==0) return 0;
   	n+= solve(n-1);
    return n;
}

int k;

int main() {
    cin >> k;
    cout << solve(k) << endl;
    return 0;
}
