#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int v[150010];
int n, m, c;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cin >> n;
	while(n--) {
		cin >> m;
		for(int i=0; i<m; i++) {
			cin >> v[i];
		}
		int mini = v[m-1];
		for(int i=m-2; i>=0; i--) {
			if(v[i] > mini) c++;
			mini = min(mini, v[i]);
		}
		cout << c << endl;
		c = 0;
	}
	return 0;
}