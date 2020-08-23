#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
  
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        ll t1, t2;
        map<ll, ll> mp;

        for(int i=0; i < n; i++) {
            cin >> t1 >> t2;
            mp[t1]++, mp[t2]--;
        }

        ll resp = 0, sum = 0;
        for(auto evenValue: mp) {
            sum += evenValue.second;
            resp = max(resp, sum);
        }

        cout << resp << endl;
    }
}
