#include <bits/stdc++.h>

using namespace std;

int main () {

	char s;
	double a=0, b=0;

	cin >> s;
	cin >> a >> b;

	switch (s){
		case 'M':
			cout << fixed << setprecision(2) << (a*b) << endl;
			break;

		case 'D':
			cout << fixed << setprecision(2) << (a/b) << endl;
			break;
	}

return 0;	
}