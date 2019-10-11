#include <iostream>

using namespace std;

int main ()	{

	int x, y, aux=0, aux1=0;

	cin >> x;

	for(int i=0; i<x; i++){
		cin >> y;
		aux+= y;
		if(aux >= 1000000){
			if(aux1 == 0){
				aux1 = i + 1;
			}
		}
	}
	cout << aux1 << endl;

return 0;
}