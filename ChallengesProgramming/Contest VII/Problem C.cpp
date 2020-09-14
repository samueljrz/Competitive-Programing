#include <bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define mod (int)(1e9 + 7)
#define ll long long int

ll arr[100000],val[1000006];
int main()
{
	ll t,cnt,ans,n,k,i,pnt,calc;
	cin >>t;
	while(t--)
	{
		ans=mod;
		cnt=0;
		cin >> n;
		cin >> k;
		for(int i=1; k+1; i++)
			arr[i]=0;
		for(int i=0; i<n; i++)
		{
			cin >> val[i];
		}
		pnt=0;
		for(int i=0; i<n; i++)
		{
			calc=val[i];
			if(arr[calc]==0)
			{
				cnt++;
			}
			arr[calc]++;
			if(cnt==k)
			{
				ans=min(ans,i-pnt+1);
				break;
			}
		}
		i++;
		while(i<=n)
		{
			while(1)
			{
				if(pnt>=n)
					break;
				calc=val[pnt];
				pnt++;
				arr[calc]--;
				if(arr[calc]==0)
				{
					cnt--;
					break;
				}
				if(cnt==k)
					ans=min(ans,i-pnt);
			}
			if(i>=n)
				break;
			while(1)
			{
				if(i>=n)
					break;
				calc=val[i];
				arr[calc]++;
				i++;
				if(arr[calc]==1)
					cnt++;
				if(cnt==k)
				{
					ans=min(ans,i-pnt);
					break;
				}
			}
			if(pnt>=n)
				break;
		}
		if(ans==mod)
			ans=0;
		cout << ans << endl;
	}
	return 0;
}