#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int ans, aux1, aux2;

int main() {
	cin >> s1;
	cin >> s2;
	for(int i=0; i<s1.size(); i++) {
		if(s1[i] == s2[i] or s1[i] == (s2[i] + 32) or (s1[i] + 32) == s2[i] or (s2[i] + 32) == (s1[i] + 32)) {
			ans = 0;
		}else {
			s1[i] = toupper(s1[i]);
			s2[i] = toupper(s2[i]);
			aux1 = s1[i] - '0';
			aux2 = s2[i] - '0';
			if(aux2 > aux1) {
				cout << "-1" << endl;
				return 0;
			}else {
				cout << "1" << endl;
				return 0;
			}
		}
	}
	cout << ans << endl;
	return 0;
}