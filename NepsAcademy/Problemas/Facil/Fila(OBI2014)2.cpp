#include <bits/stdc++.h>
using namespace std;


int fila[50001], filaaux[50001];
int x, y, aux;

int main ()	{
	cin >> x;
	memset(fila, 0, sizeof(int));
	for(int i=0; i<x; i++)	{
		cin >> fila[i];
	}

	cin >> y;

	for(int i=0; i<y; i++)	{
		cin >> aux;
		filaaux[aux] = 1;
	}

	for(int i=0; i<x; i++)	{
		int id = fila[i];
		if(filaaux[id] == 1)	{
		}else	{
			cout << id << " ";
		}
	}	
	return 0;
}