#include <cstdio>
#include <cstring>
#define SIZE 100000
#define gc getchar
#define ull unsigned long long
#define MOD 1000000007
char num[SIZE+9];
ull fact[SIZE+9];
int cnt[10];
void factorial()
{
	fact[0]=1;
	for(int i=1;i<SIZE+2;i++)
	{
		fact[i]=fact[i-1]*i%MOD;
	}
}
ull powMod(ull a,ull b)
{
	ull ans=1;
	a=a%MOD;
	while(b>0)
	{
		if(b&1)
		ans=(ans*a)%MOD;
		
		b>>=1;
		a=(a*a)%MOD;		
	}
	return ans;	
}
int main()
{
	int t,len;
	char c;
	factorial();
	
	scanf("%d",&t);
	
	gc();
	while(t--)
	{
		memset(cnt,0,sizeof(cnt));
		ull ans=0;
		len=0;
		while(c=gc(),c!='\n' && c!=EOF)
		{
			cnt[c-48]++;
			len++;	
		}
		
		ans=fact[len];
		for(int i=0;i<10;i++)
		{
			ans=ans*powMod(fact[ cnt[i] ],MOD-2)%MOD;
			
		}
		printf("%lld\n",ans);
		
	}	
	
}
