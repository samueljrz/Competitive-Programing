#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, ans=0, aux;
	string s;
	cin >> x;

	for(int i=0; i<x; i++) {
		cin >> s;
		if(s == "report") cout << ans << endl;
		else {
			cin >> aux;
			ans+=aux;
		} 
	}

	return 0;
}