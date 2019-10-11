#include <iostream>
#include <algorithm>

struct pais	{
	int ouro, prata, bronze, id;
};

using namespace std;

int compara(pais x, pais y){
	if(x.ouro != y.ouro)	{
		return x.ouro > y.ouro;
	}
	if(x.prata != y.prata)	{
		return x.prata > y.prata;
	}
	if(x.bronze != y.bronze)	{
		return x.bronze > y.bronze;
	}
	return x.id < y.id;
}

int main ()	{
	int m, n, g, s, b;
	pais p[110] = {0}; 

	cin >> n >> m;

	for(int i=0; i<m; i++)	{
		cin >> g >> s >> b;
		p[g-1].ouro++;
		p[s-1].prata++;
		p[b-1].bronze++; 
	}

	for(int i=0; i<n; i++)	{
		p[i].id = i+1;
	}

	sort(p, p+n, compara);

	for(int i=0; i<n; i++)	{
		cout << p[i].id << " ";
	}

	cout << endl;

return 0;
}