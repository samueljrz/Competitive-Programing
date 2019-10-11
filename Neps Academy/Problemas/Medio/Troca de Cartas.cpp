#include <bits/stdc++.h> 
using namespace std;

set<int> a;
set<int> b;
int va, vb, aux, ca, cb;


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> va >> vb;
	for(int i=0; i<va; i++) {
		cin >> aux;
		a.insert(aux);	
	}
	for(int i=0; i<vb; i++) {
		cin >> aux;
		b.insert(aux);	
	}
	for(set<int>::iterator it = a.begin(); it != a.end(); it++) {
		if(b.find(*it) == b.end()) {
			ca++;
		}
	}
	for(set<int>::iterator it = b.begin(); it != b.end(); it++) {
		if(a.find(*it) == a.end()) {
			cb++;
		}
	}
	cout << min(ca, cb) << endl;
	return 0;	
}