#include <iostream>
#include <vector>

using namespace std;

int main ()	{

		int n, m, aux, count=0;
		vector<int> pinos;

		cin >> n >> m;

		for (int i=0; i<n; i++)	{
			cin >> aux;
			pinos.push_back(aux);
		}
		aux = 0;
		while (aux < n)	{
			if(pinos[aux] > m)	{
				for(int i = pinos[aux]; i>m; i--)	{
					pinos[aux]--;
					pinos[aux+1]--;
					count++;
				}
			}else if(pinos[aux] < m)	{
				for(int i = pinos[aux]; i<m; i++)	{
					pinos[aux]++;
					pinos[aux+1]++;
					count++;
				}
			}
			aux++;
		}
		cout << count << endl;
return 0;
}