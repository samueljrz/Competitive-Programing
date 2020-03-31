#include <bits/stdc++.h>
using namespace std;

map<string, string> jsp;
map<string, string>::iterator it;
int t, m, n, s;
string aux1, aux2, aux3, aux4, ans;
vector<string> ans1;

int main() {
	cin >> t;
	while(t--) {
		cin >> m >> n;
		fflush(stdin);
		getline(cin, aux4);
		for(int i=0; i<m; i++) {
			fflush(stdin);
			getline(cin, aux1);
			fflush(stdin);
			getline(cin, aux2);
			fflush(stdin);
			jsp.insert(make_pair(aux1, aux2));
		}
		//getline(cin, aux4);
		for(int i=0; i<n; i++) {
			aux4.clear();
			aux3.clear();
			fflush(stdin);
			getline(cin, aux3);
			fflush(stdin);
			for(int j=0; j<aux3.size()+1; j++) {
				if(aux3[j] == ' ' or j == aux3.size()) {
					it = jsp.find(aux4);
					if(it == jsp.end()) {
						ans += aux4;
						ans += ' ';
						aux4.clear();
					}else if(it != jsp.end()) {
						ans += (*it).second;
						ans += ' ';
						aux4.clear();
					}
				}else {
					aux4 += aux3[j];
				}
			}
			ans1.push_back(ans);
			if(n != 0) { 
				ans1.push_back("endl");
			}
			ans.clear();
		}
		if(t != 0) {
			ans1.push_back("endl");
		}
	}
	for(int i=0; i<ans1.size(); i++) {
		if(ans1[i] == "endl") {
			cout << endl;
		}else
			cout << ans1[i];
	}
	cout << endl;
	return 0;
}