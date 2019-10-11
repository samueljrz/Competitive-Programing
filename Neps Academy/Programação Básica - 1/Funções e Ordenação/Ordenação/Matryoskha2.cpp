#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int x, aux1;
	vector<int> matry;
	vector<int> aux;
	vector<int> result;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> aux1;
		matry.push_back(aux1);
		aux.push_back(aux1);
	}

	sort(aux.begin(), aux.end());
	aux1=0;

	for(int i=0; i<x; i++)	{
		if(matry[i] != aux[i])	{
			result.push_back(matry[i]);
			aux1++;
		}
	}

	cout << aux1 << endl;

	sort(result.begin(), result.end());

	for(int i=0; i<aux1; i++)	{
		if(i == (aux1 - 1))	{
			cout << result[i];
		}else
			cout << result[i] << " ";
	}

	return 0;

}