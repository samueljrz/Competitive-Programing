#include <iostream>
#include <vector>

using namespace std;

int busca_binaria(vector<int>& casas, int size, int procurar,int *pos_fin);

int main ()	{

		int n, soma, aux;
		vector<int> casas;

		cin >> n;

		for(int i=0; i<n; i++)	{
			cin >> aux;
			casas.push_back(aux);
		}

		cin >> soma;

		cout << busca_binaria(casas, n, soma, &aux);
		cout << " ";
		cout << aux << endl;

return 0;
}

int busca_binaria(vector<int>& casas, int size, int procurar,int *pos_fin)
{
	int ini=0, fim=size-1, posmax=0, posmin=0, auxmax, auxmin;
	posmax = (ini + fim) / 2;
	posmin = ((ini + fim) / 2) - 1;
	auxmax = posmax;
	auxmin = posmin;
	while(ini <= fim)	{
 		if((casas[posmax]+casas[posmin]) == procurar)	{
			*pos_fin = casas[posmax];
			return casas[posmin];			
		}
		else{
		 	if ((casas[posmax]+casas[posmin]) > procurar)	{
				posmin--;
				if(posmin == 0)	{
					posmax--;
					auxmin--;
					posmin = auxmin;
				}
			}else	{
				posmax++;
				posmin++;
			}	 
		}
	}	
}