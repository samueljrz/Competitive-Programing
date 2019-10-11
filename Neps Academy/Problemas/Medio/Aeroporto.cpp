#include <bits/stdc++.h>
using namespace std;

int ord(int a, int b)   {
   return a > b;
}

int  a, v, vec[10001], vecaux[10001], aux, aux1, x=1;
bool ver;

int main () {

   while(cin >> a >> v and (a or v))  {
      memset(vec, 0, sizeof(vec));
      memset(vecaux, 0, sizeof(vecaux));
      ver = true;
      for(int i=1; i<=v; i++) {
         cin >> aux >> aux1;
         vec[aux]++;
         vec[aux1]++;
         vecaux[aux]++;
         vecaux[aux1]++;
      }
      
      sort(vecaux+1, vecaux+10002, ord);

      cout << "Teste " << x << endl;
      for(int i=1; i<=a; i++)  {
         if((vec[i] == vecaux[1]) and ver) {
            cout << i;
            ver = false;
         }else if ((vec[i] == vecaux[1]) and (not ver))  {
            cout << " " << i;
         }
      }
      cout << endl;
      x++;
   }
return 0;
}