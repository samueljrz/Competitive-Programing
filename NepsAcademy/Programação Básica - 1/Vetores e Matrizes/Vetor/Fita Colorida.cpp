#include <iostream>
#include <vector>
#include <algorithm>

#define INF 999999999
#define MAX 10100

using namespace std;

int main ()	{

	int x, fita[MAX], esq[MAX], dir[MAX];

	cin >> x;

	for(int i=1; i<=x; i++)	{
		cin >> fita[i];
	}

	for(int i=0; i<=x+1; i++)	{
		esq[i] = dir[i] = INF;
	}

	for(int i=1; i<=x; i++)	{
		if(fita[i] == 0)	{
			esq[i] = 0;
		}else	{
			esq[i] = esq[i-1] + 1;
		}
	}

	for(int i=x; i>0; i--)	{
		if(fita[i] == 0)	{
			dir[i] = 0;
		}else	{
			dir[i] = dir[i+1] + 1;
		}
	}

	for(int i=1; i<=x; i++)	{
		cout << min(9, min(esq[i], dir[i])) << " ";
	}

return 0;
}