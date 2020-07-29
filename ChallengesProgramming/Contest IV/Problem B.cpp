#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ll sum = 0;
    vector<ll> in;
    vector<ll> removed;
    vector<ll> added;
    bool status = true;
    
    ll N;
    ll K;
    
    cin >> N;
    cin >> K;
    
    for (int i = 0 ; i < N ; i++) {
        ll aux;
        cin >> aux;
        in.push_back(aux);
    }
    

    removed.resize(K);
    added.resize(K);

    removed[K-1] = in[0];
    added[0] = 0;

    for (int i = 1 ; i < K ; i++) {
    	removed[K-1-i] = removed[K-i]+in[i];
    	added[i] = added[i-1]+in[N-i];
    }

    sum = 0;

    for(int i = 0; i < K; i++) {
    	sum = max(sum, (removed[i]+added[i]));
    }

    cout << sum << endl;
 
    return 0;
}