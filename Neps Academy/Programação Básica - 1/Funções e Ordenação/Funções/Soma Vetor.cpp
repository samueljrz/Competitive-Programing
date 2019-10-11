#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

int soma_vetor(vector<int> x, int z)	{
	int w=0;

	for(int i=0; i<z; i++)	{
		w += x[i];
	}
return w;
}

int main ()	{
	int x, aux;
	vector<int> soma;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> aux;
		soma.pb(aux);
	}
	cout << soma_vetor(soma, x) << endl;

return 0;
}