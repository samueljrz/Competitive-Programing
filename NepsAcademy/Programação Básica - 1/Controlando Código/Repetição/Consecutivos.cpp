#include <iostream>
#include <vector>

using namespace std;

int main ()	{

	int x, aux=0, aux1=1;
	vector<int> numeros;
	vector<int> sequencia;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> aux;
		numeros.push_back(aux);
	}
	
	for(int i=0; i<x; i++)	{
		if(numeros[i] != numeros[i+1])	{
			sequencia.push_back(aux1);
			aux1=1;
		}else	{
			aux1++;
		}
	}
	
	aux = sequencia.size();
	aux1 = 0;

	for(int i=0; i<aux; i++)	{
		if(sequencia[i] > aux1)	{
			aux1 = sequencia[i];
		}
	}
	cout << aux1 << endl;
return 0;
}