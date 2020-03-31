#include <iostream>

#define INF 99999999
#define INFN -9999999

using namespace std;

int testcase[100100], awardsrange[100100], strongorcs[100100];

int busca_binaria(int *x, int *y, int n, int orcs);

int main ()	{

	int n, m;

	cin >> n >> m;

	testcase[0] = 0;
	testcase[n] = INF;

	for(int i=1; i<=(n-1); i++)	{
		cin >> testcase[i];
	}

	for(int i=1; i<=n; i++)	{
		cin >> awardsrange[i];
	}

	for(int i=1; i<=m; i++)	{
		cin >> strongorcs[i];
	}

	for(int i=1; i<=m; i++)	{
		if(i == m)	{
			cout << busca_binaria(testcase, awardsrange, n, strongorcs[i]);			
		}else	{
			cout << busca_binaria(testcase, awardsrange, n, strongorcs[i]) << " ";
		}
	}

return 0;
}

int busca_binaria(int *x, int *y, int n, int orcs)	{
	int beg=1, mid, end;
	end = (n-1);
	mid = (beg+end)/2;

	while(beg <= end)	{
		if(orcs == x[mid])	{
			return y[mid+1];
		}else if(orcs > x[mid])	{
			if(orcs < x[mid+1])	{
				if(mid == end)	{
					return y[mid];
				}else
					return y[mid-1];
			}else if(orcs >= x[mid+1])	{
				beg = mid+1;
				mid = (beg + end)/2;
			}
		}else if(orcs < x[mid])	{
			if(orcs > x[mid-1])	{
				if(mid == beg)	{
					return y[mid];
				}else	{
					return y[mid-1];
				}
			}else if(orcs <= x[mid-1])	{
				end = mid-1;
				mid = (beg + end)/2;
			}
		}
	}
return 0;
}