#include <bits/stdc++.h>
using namespace std;

vector< pair<int, int> > area;
int p, s, ff, ss, auxfirst, auxsecond;

int ord(pair<int, int> x, pair<int, int> y) {
	return x.first < y.first;
}

int main () {

	cin >> p >> s;

	for(int i=0; i<s; i++) {
		cin >> ff >> ss;
		area.push_back(make_pair(ff, ss));
	}

	sort(area.begin(), area.end(), ord);
	auxfirst = area[0].first;
	auxsecond = area[0].second;

	for(int i=1; i<s; i++)	{
		if(area[i].second < auxsecond) {			
		}else if(area[i].first <= auxsecond) {
			auxsecond = area[i].second;
		}else {
			cout << auxfirst << " " << auxsecond << endl;
			auxfirst = area[i].first;
			auxsecond = area[i].second;
		}
	}
	cout << auxfirst << " " << auxsecond << endl;
	return 0;
}