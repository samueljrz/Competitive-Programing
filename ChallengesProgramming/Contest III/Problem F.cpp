#include <bits/stdc++.h>

using namespace std;

int main () {

    int T;
    int N;
    int troca;
    string str;
    vector<int> prexA, sufxB;

    cin >> T;

    while(T--) {

        troca = 99999999;

        cin >> N;
        cin >> str;

        prexA.resize(N);
        sufxB.resize(N);

        // prex
        if(str[0] == 'A') {
            prexA[0] = 1;
        }else
            prexA[0] = 0;
        for( int i = 1; i < N ; i++) {
            if(str[i] == 'A') {
                prexA[i] = prexA[i-1] + 1; 
            }else{
                prexA[i] = prexA[i-1];
            }

        }

        // sufx
        if(str[N-1] == 'B') {
            sufxB[N-1] = 1;
        }else
            sufxB[N-1] = 0;
        for( int i = N-2; i >= 0 ; i--) {
            if(str[i] == 'B') {
                sufxB[i] = sufxB[i+1] + 1; 
            }else
                sufxB[i] = sufxB[i+1];
        }

        for(int i = 0 ; i <= N; i++) {

            int sum_aux = 0;

            if(i == 0) {
                sum_aux = N - sufxB[0];
                if( sum_aux < troca)
                    troca = sum_aux;
            }
            else if(i == N) {
                sum_aux = N - prexA[i-1];
                if( sum_aux < troca)
                    troca = sum_aux;
            }
            else{
                sum_aux = N - prexA[i-1] - sufxB[i];
                if(sum_aux < troca)
                    troca = sum_aux;
            }
        }

        cout << troca << "\n";

    }

    return 0;

}