#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	string s;
	string ans;
	cin >> s;
	ans = s;
	for(int i=0; i<s.size(); i++) {
		if(s[i] >= 0 and s[i] <= 9) {
			ans[i] = s[i];
		}else if(s[i] >= 'A' and s[i] <= 'C') {
			ans[i] = '2';
		}else if(s[i] >= 'D' and s[i] <= 'F') {
			ans[i] = '3';
		}else if(s[i] >= 'G' and s[i] <= 'I') {
			ans[i] = '4';
		}else if(s[i] >= 'J' and s[i] <= 'L') {
			ans[i] = '5';
		}else if(s[i] >= 'M' and s[i] <= 'O') {
			ans[i] = '6';
		}else if(s[i] >= 'P' and s[i] <= 'S') {
			ans[i] = '7';
		}else if(s[i] >= 'T' and s[i] <= 'V') {
			ans[i] = '8';
		}else if(s[i] >= 'W' and s[i] <= 'Z') {
			ans[i] = '9';
		}else if(s[i] == '-') {
			ans[i] = '-';
		}
	}
	cout << ans << endl;
}