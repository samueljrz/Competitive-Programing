#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];

   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                c++;
        }

        if(c==n)
        {
            int pp=maxSubArraySum(a,n);
            sort(a,a+n);
            cout<<pp<<" "<<a[n-1]<<endl;
        }
        else
        {
            int pp=maxSubArraySum(a,n);
            //cout<<pp<<endl;
            sort(a,a+n);
            int f=0,sum=0;
            for(int i=n-1;i>=0&&f==0;i--)
            {
                if(a[i]>=0)
                    sum+=a[i];
                else
                    f=1;
            }
            if(pp>sum)
                sum=pp;
            cout<<pp<<" "<<sum<<endl;
        }
    }
    return 0;
}
