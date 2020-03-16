#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int a[100];

int main() {
	int t,n,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		int sum=0;
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(i=0;i<n;i++) {
			if(i) sum+=abs(a[i]-a[i-1]);
		}
		sum+=abs(a[n-1]-a[0]);
		printf("%d\n",sum);
	}
return 0;
}
