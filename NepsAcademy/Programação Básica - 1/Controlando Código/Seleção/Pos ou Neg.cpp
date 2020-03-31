#include <iostream>

using namespace std;

int main ()	{

	int x;

	cin >> x;

	if(x == 0){
		cout << "nulo" << endl;
	}else if(x > 0)	{
		cout << "positivo" << endl;
	}else
		cout << "negativo" << endl;

return 0;
}