#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(i= a ; i < b ; ++i)
#define rep(i,n) FOR(i,0,n)
#define min(a,b) ((a)<(b)?(a):(b))
#define pln(n) printf("%lld\n",n)
#define sl(n) scanf("%lld",&n)
#define mod (int)(1e9 + 7)
#define ll long long int
ll modpow(ll a,ll n,ll temp){ll res=1,y=a;while(n>0){if(n&1)res=(res*y)%temp;y=(y*y)%temp;n/=2;}return res%temp;} 
ll arr[100000],val[1000006];
int main()
{
	ll t,cnt,ans,n,k,i,pnt,calc;
	sl(t);
	while(t--)
	{
		ans=mod;
		cnt=0;
		sl(n);
		sl(k);
		FOR(i,1,k+1)
			arr[i]=0;
		rep(i,n)
		{
			sl(val[i]);
		}
		pnt=0;
		rep(i,n)
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
		pln(ans);
	}
	return 0;
}