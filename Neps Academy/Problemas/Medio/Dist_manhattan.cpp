#include <bits/stdc++.h>

using namespace std;

double x0, b0, x1, b1;

int main(){

	cin >> x0 >> b0;
	cin >> x1 >> b1;

	cout << sqrt((x1 - x0) * (x1 - x0)) + sqrt((b1 - b0) * (b1 - b0)) << endl;

	return 0;
}