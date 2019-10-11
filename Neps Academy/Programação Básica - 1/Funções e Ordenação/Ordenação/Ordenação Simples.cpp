#include <iostream>
#include <algorithm>

using namespace std;

int main ()	{

	int x, *y;

	cin >> x;

	y = (int *) malloc(x*sizeof(int));

	for(int i=0; i<x; i++)	{
		cin >> y[i];
	}

	sort(y, y+x);

	for(int i=0; i<x; i++)	{
		if(i == (x-1))	{
			cout << y[i];
		}else	{
			cout << y[i] << " ";
		}
	}

return 0;
}