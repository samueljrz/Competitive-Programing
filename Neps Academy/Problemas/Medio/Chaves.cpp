#include <bits/stdc++.h>
using namespace std;

stack<char> p;
string s;
int n;

int main() {
	cin >> n;
	getchar();
	while(n--) {
		s.clear();
		getline(cin, s);
		for(int i=0; i<s.size(); i++) {
			if(s[i] == '{') {
				p.push('{');
			}else if(s[i] == '}' and p.empty()) {
				cout << 'N' << endl;
				return 0;
			}else if(s[i] == '}' and not p.empty()) {
				p.pop();
			}
		}
	}
	if(p.empty()) {
		cout << 'S' << endl;
	}else
		cout << 'N' << endl;

	return 0;
}