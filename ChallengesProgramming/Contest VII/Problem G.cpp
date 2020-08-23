#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

long long dp[10005];
long long a[10005];

void solve( int n ) {

   for( int i = 2; i<n ; i++ )
        dp[i]=max(dp[i-2]+a[i],dp[i-1]);
}

int main() {

    int t,temp=0;

    scanf("%d", &t);

    while(t--) {

        memset(dp,0,sizeof(dp));
        memset(a,0,sizeof(a));
        temp++;
        int n;
        scanf("%d",&n);
        int i=0;
        for(i=0;i<n;i++)scanf("%lld",&a[i]);
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        solve(n);
        printf("Case %d: %lld\n",temp,dp[n-1]);

    }

    return 0;

}
