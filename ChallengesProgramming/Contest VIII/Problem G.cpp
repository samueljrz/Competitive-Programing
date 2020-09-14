#include <bits/stdc++.h>
#define MAXN 1000001

using namespace std;

typedef long long ll;

bool notPrime[MAXN];
ll factor[MAXN];

void primeFactors() {
    for(int i = 2; i <= MAXN-1; ++i)
        if(!notPrime[i]) {
            for(ll j = i; j <= MAXN-1; j+=i) {
                if(!notPrime[j]) {
                    notPrime[j] = true;
                    factor[i]++;
                }
            }
                
        }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    primeFactors();
    int t;
    cin >> t;
    while(t--) {
    ll x;
        cin >> x;
        cout << factor[x] << '\n';
    }
}
