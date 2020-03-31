#include <bits/stdc++.h>
using namespace std;

int n, m, aux;
vector<int> vn;
vector<int> vm; 

int main () {

   cin >> n;

   for(int i=0; i<n; i++)  {
      cin >> aux;
      vn.push_back(aux);
   }

   cin >> m;
   for(int i=0; i<m; i++)  {
      cin >> aux;
      vm.push_back(aux);
   }   

   for(int i=0; i<m; i++)  {
      for(int j=0; j<n; j++)  {
         if(vm[i] == vn[j])   {
            vn.erase(vn.begin()+j);
            break;
         }
      }
   }

   cout << vn[0];

   for(int i=1; i<vn.size(); i++)   {
      cout << " " << vn[i];
   }

return 0;
}