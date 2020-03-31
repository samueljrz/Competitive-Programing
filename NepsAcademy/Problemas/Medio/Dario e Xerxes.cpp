#include <bits/stdc++.h>
using namespace std;

vector< pair<int, int> > jogo;
int n, aux1, aux2, dar, xer;

int main () {
	cin >> n;
	for(int i=0; i<5; i++) {
		jogo.push_back(make_pair(i+1, i+2));
		if(jogo[i].second == 5) {
			jogo[i].second = 0;
		}
		if((jogo[i].first == 5) and (jogo[i].second == 6)) {
			jogo[i].first = 0;
			jogo[i].second = 1;
		} 
	}
	for(int i=0; i<n; i++) {
		cin >> aux1 >> aux2;
		if((jogo[aux1].first == aux2) or (jogo[aux1].second == aux2)) {
			dar++;
		}else
			xer++;
	}
	if(dar > xer) {
		cout << "dario" << endl;
	}else
		cout << "xerxes" << endl;
	return 0;
}