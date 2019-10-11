#include <bits/stdc++.h>
using namespace std;

int v[200010];
int coast[200010];
int pos[200010];

int main() {
	int n, k;
	cin >> n >> k;
	for(int i=0; i<n; i++) {
		cin >> v[i];
	}
	sort(v, v+n);
	int res = n*2000;
	for(int i=0; i<n; i++) {
		int aux = v[i];
		int custo = 0;
		while(aux > 0) {
			if(pos[aux] < k) {
				pos[aux]++;
				coast[aux]+= custo;
				if(pos[aux] == k) {
					res = min(res, coast[aux]);
				}
			}
			custo++;
			aux /= 2;
		}
		if(pos[aux] < k) {
			pos[aux]++;
			coast[aux]+= custo;
			if(pos[aux] == k) {
				res = min(res, coast[aux]);
			}
		}	
	}
	cout << res << endl;
}