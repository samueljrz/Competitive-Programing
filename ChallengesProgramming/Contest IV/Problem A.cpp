#include <bits/stdc++.h>
using namespace std;

int aux[100001];

int main() {
	int n, ans=0, maxatt=0;
	stack<int> in;

	cin >> n;

	for(int i=0; i<n; i++){
		int aux;
		cin >> aux;
		if(in.size() == 0) {
			in.push(aux);
		}else if(in.size() == 1) {
			in.push(aux);
			ans++;
		}else if(in.size() > 1) {
			maxatt = in.top();
			in.pop();
			ans++;
			if(in.top() > maxatt and maxatt < aux) {
				ans++;
				in.pop();
			}else {
				in.pop();
			}
			in.push(aux);
		}
	}

	cout << ans << endl;
}