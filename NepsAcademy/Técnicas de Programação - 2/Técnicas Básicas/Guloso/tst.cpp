#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define INF 0x3F3F3F3F

struct hotel {
	int preco, ordem;
};

int funcmax (int x, int y)	{
	return x > y;
}

int n, k, ptstotal, vmax=INF, total=0, aux=0, vmax2[100010];
hotel  vk[100010];

int main ()	{

	cin >> n >> k;

	for(int i=1; i<=n; i++)	{
		cin >> vk[i].preco;
		vk[i].ordem = i;
		vmax2[i] = vk[i].preco;
	}

	if(k == 1)	{
		ptstotal = floor(n/2);
	}else if(k == n) {
		for(int i=1; i<=n; i++)	{
			total += vk[i].preco;
		}
		cout << total << endl;
		return 0;
	}else	{
		ptstotal = ((floor(n/k))-1);
	}

	sort(vmax2+1, vmax2+n+1, funcmax);

	vmax = vmax2[ptstotal];

	for(int i=1; i<=n; i++)	{
		if((vk[i].preco >= vmax) and (aux >= k))	{
			aux -= k;
		}else	{
			total += vk[i].preco;
			aux++;
			if((vk[i].preco == vmax) && (vk[i].preco != vk[i+1].preco))	{
				vmax = vmax2[ptstotal+1];
				ptstotal++;
			}
		}
	}

	cout << total << endl;

return 0;
}