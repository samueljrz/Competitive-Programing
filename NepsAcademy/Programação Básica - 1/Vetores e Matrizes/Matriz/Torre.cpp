#include <iostream>

#define MAX 1010

using namespace std;

int main ()	{

	int x, matriz[MAX][MAX], aux=0, result=0, aux1=0;

	cin >> x;

	for(int i=0; i<x; i++)	{
		for(int j=0; j<x; j++)	{
			cin >> matriz[i][j];
		}
	}

	for(int i=0; i<x; i++)	{
		for(int h=0; h<x; h++)	{
			aux1 = matriz[i][h];
			for(int j=0; j<x; j++)	{
				aux += matriz[i][j] + matriz[j][h];
			}
		aux = aux - 2*aux1;
		if(aux > result)	{
			result = aux;
			aux = 0;
		}else	{
			aux = 0;
		}
		}
	}
	cout << result << endl;

return 0;
}