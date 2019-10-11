#include <bits/stdc++.h>   
using namespace std;

int n, mtz[101][101], count0=0, count1=0;

int main () {

   cin >> n;

   for(int i=0; i<n; i++)  {
      for(int j=0; j<n; j++)  {
         cin >> mtz[i][j];
      }
   }

   for(int i=1; i<=(n-1); i++)   {
      for(int j=1; j<=(n-1); j++)   {
         if(mtz[i][j-1] == 0) {
            count0++;
         }else {  
            count1++;
         }
         if(mtz[i-1][j-1] == 0) {
            count0++;
         }else {  
            count1++;
         }
         if(mtz[i-1][j] == 0) {
            count0++;
         }else {  
            count1++;
         }
         if(count1 > count0)  {
            mtz[i][j] = 0;
         }else { 
            mtz[i][j] = 1;
         }
         count1=0;
         count0=0;
      }
   }

   cout << mtz[n-1][n-1] << endl;

return 0;
}