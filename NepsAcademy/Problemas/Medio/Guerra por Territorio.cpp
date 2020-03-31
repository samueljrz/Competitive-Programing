#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, aux, ans=0;
	vector<int> b;
	cin >> a;
	for(int i=0; i<a; i++) {
		cin >> aux;
		ans+= aux;
		b.push_back(aux);
	}
	aux=0;
	aux=ans/2;
	ans=0;
	a=0;
	while(ans != aux) {
		ans+= b[a];
		a++;
	}
	cout << a << endl;
	return 0;
}