#include <bits/stdc++.h>
using namespace std;

double ans, minx=15, maxx, aux;

int main() {
	for(int i=0; i<5; i++) {
		cin >> aux;
		ans+= aux;
		minx = min(aux, minx);
		maxx = max(aux, maxx);
	}
	cout << fixed << setprecision(1) << (ans-minx-maxx) << endl;
}