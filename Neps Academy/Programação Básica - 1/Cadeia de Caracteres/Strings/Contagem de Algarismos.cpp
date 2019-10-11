#include <iostream>
#include <cstring>

using namespace std;

int main ()	{

	int x, z, sizealgarismos=0, qtd[10]={0};
	string algarismos, aux;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> algarismos;
		aux+= algarismos;
	}

	sizealgarismos = aux.size();

	for(int i=0; i<sizealgarismos; i++)	{
		z = aux[i] - '0';
		qtd[z]++;
	}

	for(int i=0; i<10; i++)	{
		cout  << i << " - " << qtd[i] << endl;
	}

return 0;
}