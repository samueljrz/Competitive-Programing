#include<bits/stdc++.h>
using namespace std;

int n, aux=0;
string s;
char ans[50];

int main() {
	cin >> s;
	n = s.size();
	for(int i=0; i<n; i++) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			ans[aux] = s[i];
			aux++;
		}
	}
	for(int i=0; i<aux; i++) {
		if(ans[i] != ans[aux-i-1]) {
			cout << 'N' << endl;
			return 0;
		}
	}
	cout << 'S' << endl;
	return 0;
}