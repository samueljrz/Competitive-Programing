#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ans=0;
	vector<int> in;
	stack<int> stk;

	cin >> n;
	in.resize(n);
	
	for(int i=0; i<n; i++) {
		cin >> in[i];
	}

	for(int i=0; i<n; i++) {
		int count = 0;
		while(!stk.empty() and stk.top() < in[i]) {
				stk.pop();
				count++;
				ans += !stk.empty();
		}
		ans += count;
		stk.push(in[i]);
	}
	ans += stk.size() - 1; 
	cout << ans << endl;
	return 0;
}