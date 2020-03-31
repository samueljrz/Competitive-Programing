#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()	{

	float x, aux;
	vector<float> numeros;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> aux;
		numeros.push_back(aux);
	}

	for(int i=0; i<x; i++)	{
		aux = numeros[i];
		numeros[i] = sqrt(aux);
		cout << fixed << setprecision(4);
		cout << numeros[i] << endl;;
	}

return 0;
}