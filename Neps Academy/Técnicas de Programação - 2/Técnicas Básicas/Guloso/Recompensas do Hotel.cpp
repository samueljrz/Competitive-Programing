#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct hotel {
	int preco, ordem;
};

int funcp (hotel x, hotel y)	{
	return x.preco > y.preco;
}

int funco (hotel x, hotel y)	{
	return x.ordem < y.ordem;
}

int n, k, ptstotal, *vmax, total=0, aux=0;
hotel  vk[100001];

int main ()	{

	cin >> n >> k;

	for(int i=0; i<n; i++)	{
		cin >> vk[i].preco;
		vk[i].ordem = i;
	}

	if(k == 1)	{
		ptstotal = floor(n/2);
	}else if(k == n)	{
		ptstotal = 0;
	}else	{
		ptstotal = floor(n/k) - 1;
	}

	vmax = (int *) malloc(ptstotal*sizeof(int));

	sort(vk, vk+n, funcp);

	for(int i=0; i<ptstotal; i++)	{
		vmax[i] = vk[i].preco;
		if((i > 0) and (vmax[i] < vmax[0]))	{
			aux = vmax[0];
			vmax[0] = vmax[i];
			vmax[i] = aux;
			aux = 0;
		}
	}

	sort(vk, vk+n, funco);

	for(int i=0; i<n; i++)	{
		if((vk[i].preco >= vmax[0]) and (aux >= k))	{
			aux -= k;
		}else	{
			total += vk[i].preco;
			aux++;
		}
	}

	cout << total << endl;

return 0;
}