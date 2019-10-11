#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> ans;
	bool ver = true;
	char w;
	string s, ax;
	while(true) {
		cin >> w >> s;
		ver = true;
		if(w == '0' and s == "0") break;
		for(int i=0; i<s.size(); i++) {
			if(s[i] == w) {
				s.erase(s.begin()+i);
			}
		}for(int i=0; i<s.size(); i++) {
			if(i>0 and ver and s[i] != s[i-1]) {
				ver = false;
				break;
			}
		}
		if(ver) {
			ax = s[0];
			ans.push_back(ax);
		}else if(s.empty()) {
			ax = "0";
			ans.push_back(ax);
		}else 
			ans.push_back(s);
	}
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] <<endl;
	}
	return 0;
}
