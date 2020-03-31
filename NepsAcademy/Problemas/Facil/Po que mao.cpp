#include <bits/stdc++.h>
using namespace std;

int v[3], t, aux=0, total=0;

int main ()	{

	cin >> t;

	for(int i=0; i<3; i++)	{
		cin >> v[i];
	}

	sort(v, v+3);

	for(int i=0; i<3; i++)	{
		total += v[i];
		aux++;
		if(total > t)	{
			aux--;
			break;
		}
	}		

	cout << aux << endl;

return 0;
}