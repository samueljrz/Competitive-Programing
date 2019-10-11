#include <iostream>
#include <vector>

#define TBIT(p) ((p) ^=(1))

using namespace std;


int main ()	{

	int l1=0, l2=0, x, aux;
	vector<int> acoes;

	cin >> x;

	for(int i=0; i<x; i++)	{
		cin >> aux;
		acoes.push_back(aux);
	}
	
	for(int i=0; i<x; i++)	{
		if(acoes[i] == 2){
			TBIT(l1, 0);
			TBIT(l2, 0);
		}else
			TBIT(l1, 0);
	}
	cout << l1 << endl;
	cout << l2 << endl;

return 0;
}