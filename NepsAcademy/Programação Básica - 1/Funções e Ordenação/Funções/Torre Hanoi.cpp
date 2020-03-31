#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int hanoi(int n)	{
	int x;

	x = pow(2, n);
	x = x - 1;

return x;
}

int main ()	{

	int aux=-1, count=0;
	vector<int> torre;

	do{
		cin >> aux;
		torre.push_back(aux);
		count++;
	}while(aux != 0);

	for(int i=0; i<count-1; i++)	{
		cout << "Teste " << i+1 << endl;
		cout << hanoi(torre[i]);
		cout << endl << endl;

	}
	
return 0;
}