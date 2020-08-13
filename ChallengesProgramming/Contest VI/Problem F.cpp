#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef tuple<ll, ll, ll> iii;

struct compareTupla {
    
    bool operator()(const iii & p1, const iii & p2) {
        ll pfirst, psecond;
        ll sfirst, ssecond;
        tie(pfirst, psecond, ignore) = p1;
        tie(sfirst, ssecond, ignore) = p2;
        if ( psecond != ssecond ) {
            return psecond <   ssecond; 
        }else {
            return pfirst < sfirst;   
        }
    }
};

int main() {
    
    int N, T=5;
    
    priority_queue <iii, vector<iii>, compareTupla > q;
        
    cin >> N;
    
    for (int i=1 ; i<=N ; i++) {
        ll id, v, post, li, com, sh;
        ll cont=0;
        cin >> id >> v >> post >> li >> com >> sh;
        
        if ( post > 0) cont += post * 50;
        if ( li > 0) cont += li * 5;
        if ( com > 0) cont += com * 10;
        if ( sh > 0) cont += sh * 20;
        
        q.push(make_tuple(id, cont - v, (cont-v)+v));
    }
        
    while ( T-- ) {
        ll first,third;
        tie(first, ignore, third) = q.top();
        cout << first << " " << third << endl;
        q.pop();
    }
    
    return 0;
}
