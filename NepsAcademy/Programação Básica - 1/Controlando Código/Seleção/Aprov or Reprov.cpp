#include <iostream>
using namespace std;

int main ()	{

	float n1=0, n2=0;

	cin >> n1 >> n2;

	if((n1+n2) >= 14){
		cout << "Aprovado" << endl;
	}else if ((n1+n2) >= 8){
		cout << "Recuperacao" << endl;
	}else{
		cout << "Reprovado" << endl;
	}

return 0;
}