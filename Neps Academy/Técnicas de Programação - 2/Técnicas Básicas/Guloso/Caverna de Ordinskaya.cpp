#include <iostream>
#include <vector>

using namespace std; 

int v[112345];

int main ()	{

	int n, m;
	long long int ans = 0;
	
	cin >> n >> m;

	for(int i=1; i<=n; i++)	{
		cin >> v[i];
	}

	for(int i=1; i<=n; i++)	{
		if(min(v[i], m-v[i]) >= v[i-1])	{
			v[i] = min(v[i], m-v[i]);
		}else if(max(v[i], m-v[i]) >= v[i-1])	{
			v[i] = max(v[i], m-v[i]);
		}else	{
			cout << "-1" << endl;
			return 0;
		}
	}

	for(int i=1; i<=n; i++)	{
		ans += v[i];
	}

	cout << ans << endl;

return 0;
}
