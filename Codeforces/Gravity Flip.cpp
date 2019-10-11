#include <bits/stdc++.h>
using namespace std;

int n, aux;
vector<int> c;

int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> aux;
		c.push_back(aux);
	}
	sort(c.begin(), c.end());
	for(int i=0; i<n; i++) {
		if(i == (n-1)) {
			cout << c[i];
		}else
			cout << c[i] << ' ';
	}
	return 0;
}
