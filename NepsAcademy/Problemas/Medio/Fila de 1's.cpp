#include <bits/stdc++.h>
using namespace std;

long long int n;
bool resp;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	if(n == 1 or n == 0) {
		cout << 'N' << endl;
		return 0;
	}
	while(n>0) {
		if(n%2 == 0) {
			cout << 'N' << endl;
			return 0;
		}
		n /= 2;
	} 
	cout << 'S' << endl;
	return 0;
}

