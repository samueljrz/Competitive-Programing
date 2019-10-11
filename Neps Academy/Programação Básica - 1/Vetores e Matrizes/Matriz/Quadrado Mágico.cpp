#include <iostream>
#include<stdlib.h>

#define MAX 110

using namespace std;

int main ()	{

	int x, matriz[MAX][MAX], aux=0, aux1=0;

	cin >> x;

	for(int i=0; i<x; i++)	{
		for(int h=0; h<x; h++)	{
			cin >> matriz[i][h];
			if(h == i)	{
				aux += matriz[i][h];
			}
		}
	}

	for(int i=0; i<x; i++)	{
		for(int h=0; h<x; h++)	{
			aux1 += matriz[i][h];
			if(h == (x-1) and aux1 == aux)	
				aux1 = 0;				
		}
	}

	for(int i=0; i<x; i++)	{
		for(int h=0; h<x; h++)	{
			aux1 += matriz[h][i];
			if(h == (x-1) and aux1 == aux)
				aux1 = 0;		
		}
	}

	for(int i=0; i<x; i++){
		aux1 += matriz[i][i];
		if(i == (x-1) and aux1 == aux)
			aux1 = 0;
	}

	for(int i=0; i<x; i++)	{
		aux1 += matriz[i][x-1-i];
		if(i == (x-1) and aux1 == aux)	{
			cout << aux << endl;
		}else if(i == (x-1) and aux1 != aux)	{
			cout << "-1" << endl;
		}
	}

return 0;
}