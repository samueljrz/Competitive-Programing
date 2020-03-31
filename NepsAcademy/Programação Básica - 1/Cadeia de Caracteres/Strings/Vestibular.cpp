#include <iostream>

using namespace std;

int main ()	{
	int n, count=0;
	string gab, resp;

	cin >> n;
	cin >> gab;
	cin >> resp;

	for(int i=0; i<n; i++)	{
		if(gab[i] == resp[i])	{
			count++;
		}
	}
	cout << count << endl;
return 0;
}