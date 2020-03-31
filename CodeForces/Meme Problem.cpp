#include <bits/stdc++.h>
using namespace std;

long double x, aux;
vector<long double> vx;

long double ans(long double x) {
	double delta, raiz;

	delta = ((x*x) - (4*-1*-x));
	raiz = (-x + sqrt(delta))/-2;
	return raiz;
}

int main() {
	cin >> x;
	for(int i = 0; i < x; i++) {
		cin >> aux;
		vx.push_back(aux);
	}

	for(int i = 0; i < x; i++) {
		long double a, b;
		if(vx[i] < 4 and vx[i] > 0) {
			cout << "N" << endl;
		}
		else if(vx[i] == 0) {
			a = b = 0;
			cout << fixed << setprecision(9) << "Y " << b << " " << a << endl;	
		}else {
			a = ans(vx[i]);
			b = vx[i] - a;
		cout << fixed << setprecision(9) << "Y " << b << " " << a << endl;
		}
 	}

} 