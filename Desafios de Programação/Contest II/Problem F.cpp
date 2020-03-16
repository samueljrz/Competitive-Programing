#include <iostream>
using namespace std;

int main() {
	string s;
	int i, j, n, v0=0, v1=0, var=1;
	bool ver;

	while(cin >> s) {
		cin >> n;
		cout << "Case " << var << ":" << endl; 
		while(n--) {
			cin >> i >> j;
			i = min(i, j);
			j = max(i, j);
			for(i; i<=j; i++) {
				if(s[i] == '0') {
					v0++;
				}else {	
					v1++;
				}

				if(v0>0 and v1>0) {
					cout << "No" << endl;
					ver = false;
					break;
				}else ver = true;
			}
			if(ver) cout << "Yes" << endl;
			v1 = v0 = 0;
		}	
		var++;
	}
	return 0;
}