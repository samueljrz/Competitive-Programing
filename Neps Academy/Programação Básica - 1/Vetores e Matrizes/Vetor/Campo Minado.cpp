#include <iostream>
#include <vector>

using namespace std;

int main ()	{

	int x, aux;
	vector<int> campo;
	vector<int> result;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> aux;
		campo.push_back(aux);
	}

	for(int i=0; i<x; i++)	{
		if(i == 0)	{
			aux = campo[i] + campo[i+1];
			result.push_back(aux);
		}else if(i == x)	{
			aux = campo[i] + campo[i-1];
			result.push_back(aux);
		}else	{
			aux = campo[i-1] + campo[i] + campo[i+1];
			result.push_back(aux);
		}
	}

	for(int i=0; i<x; i++)	{
		cout << result[i] << endl;
	}

return 0;
}