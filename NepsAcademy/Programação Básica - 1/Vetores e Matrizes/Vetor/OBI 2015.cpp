#include <iostream>
#include <vector>

using namespace std;

int main ()	{

	int x, aux;
	vector<int> sequencia;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> aux;
		sequencia.push_back(aux);
	}

	aux=0;

	for(int i=0; i<x-2; i++)	{
		if(sequencia[i]==1 and sequencia[i+1]==0 and sequencia[i+2]==0)	{
			aux++;
		}
	}
	cout << aux << endl;

return 0;
}