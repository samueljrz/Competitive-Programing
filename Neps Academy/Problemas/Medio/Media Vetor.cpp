#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

double mvetor(vector<int>& x) {
	double s=0;
	for(int i=0; i<x.size(); i++) {
		s += x[i];
	}
	s /= x.size();
	return s;
}

int main() {
	int n, aux;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> aux;
		ans.push_back(aux);
	}
	cout << setprecision(2) << fixed;
	cout << mvetor(ans) << endl;
	return 0;
}