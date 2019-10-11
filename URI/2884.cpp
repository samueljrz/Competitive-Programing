#include <bits/stdc++.h>
using namespace std;

bool v[1001];
int mat[1001][1001];
int n, m, l, aux, aux2, cont = 1, idx=0;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
    cin >> n >> m;
    cin >> l;

    for(int i = 0;i < l;i++){
        cin >> aux;
        v[aux] = true;
    }

    for(int i = 0; i < n; i++) {
        cin >> aux;
        mat[i][0] = aux;
        for(int j = 1; j <= aux; j++) {
            cin >> aux2;
            mat[i][j] = aux2;
        }
    }

    while(true) {
        int x = mat[idx%n][0];
        for(int i = 1; i <= x; i++) {
            v[mat[idx%n][i]] = (not v[mat[idx%n][i]]);
        }
        bool ver = false;
        for(int j = 1;j <= m;j++){
            if(v[j] == true) ver = true;
        }

        if(cont >= (3 * n)){
			cout << "-1" << endl;
			return 0;           
        }else if(ver){
            cont++;
            idx++;
        }else{
            cout << cont << endl;
            return 0;
        }
    }
}


