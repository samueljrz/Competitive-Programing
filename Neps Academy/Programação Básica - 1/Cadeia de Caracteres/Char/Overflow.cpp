#include <iostream>

using namespace std;

int main ()	{
	int n, p, q;
	char c;

	cin >> n;
	cin >> p >> c >> q;

	switch (c)	{
		case '+':
			if((p+q) > n)	{
				cout << "OVERFLOW" << endl;
				break;
			}else	{
				cout << "OK" << endl;
				break;
			}

		case '*':
			if((p*q) > n)	{
				cout << "OVERFLOW" << endl;
				break;
			}else	{
				cout << "OK" << endl;
				break;
			}
	}
return 0;
}