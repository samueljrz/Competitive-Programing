#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int> aux;
	set<int>::iterator it;
	int v[3], ans, i=0;
	cin >> v[0];
	cin >> v[1];
	cin >> v[2];

	while(i<3) {
		if(aux.find(v[i]) == aux.end()) {
			aux.insert(v[i]);
			i++;
		}else {
			aux.erase(v[i]);
			i++;
		}
	}
	it = aux.begin();
	cout << *it;
	return 0;


}