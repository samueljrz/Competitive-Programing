#include <iostream>
#include <vector>

using namespace std;

int main ()	{

	int x, aux, aux1;
	vector<int> garcom;

	cin >> x;

	for(int i=0; i<x; i++){
		cin >> aux >> aux1;
		garcom.push_back(aux);
		garcom.push_back(aux1);
	}
	
	aux = 0;
	aux1 = 0;

	while(aux < (x*2)){
		if(garcom[aux] > garcom[aux+1]){
			aux1+= garcom[aux+1];
		}
		aux+= 2;
	}
	cout << aux1 << endl;
return 0;
}