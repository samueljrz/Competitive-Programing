#include <bits/stdc++.h>
using namespace std;

int p, d1, d2, res;

int main ()	{

	cin >> p;
	cin >> d1; 
	cin >> d2;

	res = d1 + d2;

	if((p==0) and (res%2==0))	{
		cout << '0' << endl;
	}else if((p==1) and (res%2==0))	{
		cout << '1' << endl;
	}else if((p==0) and (res%2!=0))	{
		cout << '1' << endl;
	}else
		cout << '0' << endl;

return 0;
}