#include <bits/stdc++.h>
using namespace std;

vector<int> s; 

int main() {
	long long int t, n, k, v, itt, result, ant;

	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);	

	cin >> t;

	while(t--) {
		cin >> n;
		s.clear();

		for(int i=0; i<n; i++) {
			cin >> v;
			s.push_back(v);
		}

		cin >> k;

		sort(s.begin(), s.end());

		itt = 0;
		result = 0;
		ant = 0;

		while(k != 0) {
			result += (s[itt]-ant) * n;
			ant = s[itt];
			k--;
			n--;
			itt++;
		}

		cout << result << endl;
	}

	return 0;
}

