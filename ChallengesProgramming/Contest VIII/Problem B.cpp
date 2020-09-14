#include<bits/stdc++.h> 
#define MAXN 1000001

using namespace std;
 
bool notPrime[MAXN];
int accLovenumber[MAXN];
 
void lovesNumber(){
    notPrime[1] = true;
    for(int i = 2; i*i < MAXN; i++)
        if(!notPrime[i]) {
            for(int j = 2*i; j < MAXN; j+=i) notPrime[j] = true;
        }
    
    for(int i = 2; i < MAXN; i++) {
        if(!notPrime[i]) accLovenumber[i] = accLovenumber[i-1] + 1;
        else accLovenumber[i] = accLovenumber[i-1];
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    lovesNumber();
    int t, l, r;
    cin >> t;
    while(t--) {
        cin >> l >> r;
        if(l > r) swap(l,r);
        cout << accLovenumber[r] - accLovenumber[l-1] << '\n';
    }
}
