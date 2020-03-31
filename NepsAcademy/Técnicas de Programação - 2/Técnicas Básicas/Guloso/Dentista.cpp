#include <iostream>
#include <algorithm>

#define MAX 10100

using namespace std;

struct compromisso{
  int inicio, fim; 
}; // declaro a struct consulta com inicio e fim.

bool verificar(compromisso x, compromisso y)
{
	return x.fim<y.fim;
}

compromisso consulta[MAX]; // um vetor com numero de consultas no dia.

int livre, qtd;

int main ()	{

		int n;

		cin >> n;

		for(int i=1; i<=n; i++)	{
			cin >> consulta[i].inicio >> consulta[i].fim;
		}

		sort(consulta+1, consulta+n+1, verificar);

		for(int i=1; i<=n; i++)	{
			if (consulta[i].inicio >= livre){
				qtd++;
				livre = consulta[i].fim;
			}
		}
		cout << qtd << endl;

return 0;
}