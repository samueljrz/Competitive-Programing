#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int N;
    int T;
    int med;
    int ans;
    
    cin >> N;
    
    int vet[N];
    int sum[N];
    
    for ( int i=0 ; i < N; i++) {
        cin >> vet[i];
    }
    
    sum[N-1] = vet[N-1];
    for ( int i = N-2 ; i>=0 ; i--) {
        sum[i] = vet[i] + sum[i+1];  
    }
    
    cin >> T;
    
    while(T--){
        
        int l=0, r= N-1;
        int x;
        med = 0;
        ans = 0;
        
        cin >> x;
        
        while ( l <= r) {
            med = (l+r)/2;
            
            if ( ( x - sum[med]) <= 0) {
                ans = med;
                l = med + 1; 
            }else
                r = med - 1;
        }
                
        if ( N%2 == 0 ){
            if ( ans%2 != 0) {
                cout << "B" << endl;
            }else
                cout << "A" << endl;
        }else if ( N%2 != 0) {
            if ( ans%2 == 0) {
                cout << "A" << endl;
            }else
                cout << "B" << endl;
        }    
    }
    
    return 0;
}    
 