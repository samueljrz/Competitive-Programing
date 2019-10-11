#include <bits/stdc++.h>
using namespace std;


bool ver2=true, ver3=false;
int v[400001], n, aux1=0, aux2=0;

int main () {

   cin >> n;

   for(int i=0; i<n; i++) {
      cin >> v[i];
      v[n+i] = v[i]; 
   }

   if((n==1) and (v[0]==1))   {
      cout << "1" << endl;
      return 0;
   }else if((n==1) and (v[0]==0))   {
      cout << "0" << endl;
      return 0;
   }

   for(int i=0; i<n*2; i++)  {
      if(v[i] == 1)  {
         aux1++;
      }
      if((v[i] == 0) and ver3)  {
         if(aux1 > aux2)   {
            aux2 = aux1;
            aux1 = 0;
         }else {
            aux1 = 0;
         }
      }
      if((v[i] == 0) and ver2)  {
         aux2 = aux1;
         aux1 = 0;
         ver2 = false;
         ver3 = true;
      }
   }
   if(ver2)   {
      aux1 -= n;
      cout << aux1 << endl;
   }else {
      cout << aux2 << endl;
   }

return 0;
}