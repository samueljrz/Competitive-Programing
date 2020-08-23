#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define repu(v,s,e) for(ll v=s;v<e;v++)
#define repd(v,s,e) for(ll v=s;v>e;v--)
#define mod 1000000007
ll n;
int main(){
    fastio
    cin>>n;
    ll a[n],sum=0,dp[n],temp[n];
    repu(i,0,n) cin>>a[i],temp[i]=0;
    dp[0]=1;
    repu(i,0,n-1){
        temp[i+1]=(temp[i+1]+dp[i])%mod;
        if(i+1+a[i]<n) temp[i+1+a[i]]=(mod+temp[i+1+a[i]]-dp[i])%mod;
        sum=(sum+temp[i+1])%mod;
        dp[i+1]=sum;
    }
    cout<<dp[n-1];
}