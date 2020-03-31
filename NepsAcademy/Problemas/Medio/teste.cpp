#include <bits/stdc++.h>
using namespace std;

vector<int> ans, aux;

void func(string w, vector<int> &x) {
	int aux;
	for(int i=0; i<w.size(); i++) {
		aux = w[i] - '8';
		aux -= 8;
		x.push_back(aux);
	}
}

bool tst(vector<int> &z, int w) {
	for(int i=0; i<z.size(); i++) {
		if(z[i] == w) {
			return false;
		}
	}
	return true;
}

int solve(vector<int> &x) {
	int atual, ans=0;
	for(int i=0; i<x.size(); i++) {
		if(i==0) {
			ans++;
			atual = x[i];
			aux.push_back(atual);
		}else if(x[i] < x[i-1] and tst(aux, x[i])) {
			atual = x[i];
			aux.pop_back();
			aux.push_back(atual);
		}else if(x[i] >= x[i-1]) {
			ans++;
			atual = x[i];
			aux.push_back(atual);
		}
	}
	return ans;
}

int main() {
	string s;
	cin >> s;
	func(s, ans);
	cout << solve(ans) << endl;
	return 0;
}