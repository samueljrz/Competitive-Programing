#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
	return b<a;
}

int main() {
	vector<int> aux;
	int n, x;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x;
		aux.push_back(x);
	}
	sort(aux.begin(), aux.end(), solve);
	if(aux[1] == aux[0]) {
		cout << "S" << endl;
	}else 
		cout << "N" << endl;
	return 0;
}