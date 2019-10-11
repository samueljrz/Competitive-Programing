#include <bits/stdc++.h>  
using namespace std;

int a1, a2, a3, v[3], aux;

int main () {

   cin >> a1;
   cin >> a2;
   cin >> a3;

   for(int i=0; i<3; i++) {
      if(i==0) {
         v[0] = ((2*a2)+(4*a3));
      }
      if(i==1) {
         v[1] = ((2*a1)+(2*a3));
      } 
      if(i==2) {
         v[2] = ((2*a2)+(4*a1));
      } 
   }

   aux = min(v[0],v[1]);
   cout << min(aux,v[2]);

return 0;
}