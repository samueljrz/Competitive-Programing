#include <bits/stdc++.h>
using namespace std;

int n, k, v[200200], vaux[200200];

int main ()	{
	cin >> n;
	cin >> k;
	memset(vaux, 0, sizeof(int));
	for(int i=1; i<=n; i++)	{
		cin >> v[i];
	}

	for(int i=1; i<=n; i++)	{
		vaux[i] = vaux[i-1] + v[i];
	}

	int ind_ans = 0;
	int menor_soma = 999999997;

	for(int i=1; i<=n-k+1; i++)	{
		int s = vaux[i+k-1] - vaux[i-1];
		if(s < menor_soma)	{
			menor_soma = s;
			ind_ans = i;
		}
	}

	cout << ind_ans << endl;
	return 0;
}
