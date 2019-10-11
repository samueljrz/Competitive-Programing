#include <iostream>
#include <vector>

using namespace std;

int num_dinheiros(vector<int>& dinheiros, int x);

int main ()	{

		vector<int> dinheiros;
		int n;

		cin >> n;

		dinheiros.push_back(1);
		dinheiros.push_back(5);
		dinheiros.push_back(10);
		dinheiros.push_back(25);
		dinheiros.push_back(50);
		dinheiros.push_back(100);

		cout << num_dinheiros(dinheiros, n) << endl;

return 0;
}

int num_dinheiros(vector<int>& dinheiros, int x)
{
	int qtd_dinheiros = 0;
	int tam_dinheiros = 6;

	for(int i = tam_dinheiros - 1; i >= 0; i--)	{
		int aux_dinheiros = x / dinheiros[i];
		x -= aux_dinheiros * dinheiros[i];
		qtd_dinheiros += aux_dinheiros;
	}
return qtd_dinheiros;
}