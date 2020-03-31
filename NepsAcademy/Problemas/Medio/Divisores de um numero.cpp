#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, soma=0, tam=0;

int main () {
   cin >> n;

   if(n==1) {
      cout << n << " divisor(es): 1" << endl;
      cout << "Soma de divisores = " << n << endl;
      cout << "Nao primo" << endl;
      return 0;
   }

   for(int i=1; i<=n; i++) {
      if((n%i) == 0) {
         v.push_back(i);
         soma += i;
      }
   }

   tam = v.size();
   cout << tam << " divisor(es):";
   for(int i=0; i<tam; i++)   {
      cout << " " << v[i];
   }
   cout << endl;

   cout << "Soma de divisores = " << soma << endl;;

   if(tam == 2)   {
      cout << "Primo" << endl;
   }else
      cout << "Nao primo" << endl;

return 0;
}