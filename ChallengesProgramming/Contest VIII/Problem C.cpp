#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

typedef long long ll;

int main() {
    ll t, n, ans;
    cin >> t;
    while (t--) {
        cin >> n;
        n %= MOD;
        ans = (n * n) % MOD;
        ans = (ans * 2) % MOD;
        ans = (ans - n + MOD) % MOD;
        cout << ans << endl;
    }
    return 0;
}
