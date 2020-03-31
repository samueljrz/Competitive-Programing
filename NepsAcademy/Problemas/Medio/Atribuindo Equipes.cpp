#include <bits/stdc++.h>
using namespace std;

int v[4], aux1, aux2;

int main ()	{

	cin >> v[0] >> v[1] >> v[2] >> v[3];

   sort(v, v+4);

   aux1 = v[0] + v[3];
   aux2 = v[1] + v[2];

   if(aux2 > aux1)   {
      cout << (aux2 - aux1) << endl;
   }else
      cout << (aux1 - aux2) << endl;

return 0;
}
