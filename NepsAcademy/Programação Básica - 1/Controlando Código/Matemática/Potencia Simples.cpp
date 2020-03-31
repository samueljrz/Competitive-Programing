#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()	{

	double x, y;

	cin >> x >> y;

	cout << fixed << setprecision(4) << pow(x, y) << endl;

return 0;
}