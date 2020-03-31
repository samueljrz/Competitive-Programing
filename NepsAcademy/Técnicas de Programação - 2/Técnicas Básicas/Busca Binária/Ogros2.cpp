#include <iostream>

#define MAX 100100

using namespace std;

int testcase[MAX], awardsrange[MAX], strongorcs[MAX], n, m;

int busca_binaria(int orcs);

int main ()	{

	cin >> n >> m;

	testcase[0] = 0;

	for(int i=0; i<(n-1); i++)	{
		cin >> testcase[i+1];
	}

	for(int i=0; i<n; i++)	{
		cin >> awardsrange[i];
	}

	for(int i=0; i<m; i++)	{
		cin >> strongorcs[i];
	}

	for(int i=0; i<m; i++)	{
		if(i == m)	{
			cout << busca_binaria(strongorcs[i]);			
		}else	{
			cout << busca_binaria(strongorcs[i]) << " ";
		}
	}

return 0;
}

int busca_binaria(int orcs)	{
	int beg=0, mid, end;
	end = n;

	while((end-beg) > 1)	{
		mid = (beg+end)/2;
		if(testcase[mid] <= orcs)	{
			beg = mid;
		}else 	{
			end = mid;
		}
	}
return awardsrange[end-1];
}