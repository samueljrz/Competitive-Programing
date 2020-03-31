#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<double> card;
	int ans=0;
	double x, aux=2, acc=0;

	do{
		cin >> x;
		card.push_back(x);
	}while(x != 0);

	for(int i=0; i<(card.size()-1); i++) {
		while(card[i] >= acc) {
			acc+=1/aux;
			ans++;
			aux++;
		}
		acc=0;
		aux=2;
		cout << ans << " card(s)" << endl;
		ans=0;
	}
	return 0;
}