#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    
    ll N, M, ans=0;
    
    priority_queue <ll, vector<ll>, less<ll> > q;
    
    cin >> N;
    cin >> M;
    
    for ( int i = 1 ; i <= N ; i++) {
        ll x;
        cin >> x;
        q.push(x);
    }
    
    while (M--) {
        ll x = q.top();
        q.pop();
        ans += x;
        x--;
        q.push(x);
    }
    
    cout << ans << endl;
        
    return 0;
}
