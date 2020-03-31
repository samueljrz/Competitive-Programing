#include <bits/stdc++.h>
using namespace std;

string s;
int n, d, a;

int main() {
	cin >> n;
	cin >> s;
	for(int i=0; i<s.size(); i++) {
		if(s[i] == 'A') {
			a++;
		}else
			d++;
	}
	if(d > a) {
		cout << "Danik" << endl;
	}else if (d == a) {
		cout << "Friendship" << endl;
	}else 
		cout << "Anton" << endl;
	return 0;
}