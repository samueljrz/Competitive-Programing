#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
	if(n==1) return 0;
	if(n%2==0) {
		return 1 + solve((n/2));
	}else 
		return 1 + solve((3*n+1));
}

int main() {
	int n;
	cin >> n;
	cout << solve(n) << endl;
	return 0;
}