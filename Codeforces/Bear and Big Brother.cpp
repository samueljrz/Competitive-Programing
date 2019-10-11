#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
	cin >> a >> b;
	while(b >= a) {
		b *= 2;
		a *= 3;
		c++;
	}
	cout << c << endl;
	return 0;
}