#include <bits/stdc++.h>
using namespace std;

int main ()	{

	int n, ans=0;
	string ver;

	cin >> n;

	for(int i=0; i<n; i++)	{
		cin >> ver;
		if((ver == "++X") or (ver == "X++"))	{
			ans++;
		}else 
			ans--;
	}

	cout << ans << endl;

	return 0;
}