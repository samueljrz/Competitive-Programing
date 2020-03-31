#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main () {

   cin >> a >> b >> c;

   if((a == b) or (a == c) or (b == c))   {
      cout << "S" << endl;
      return 0;
   }

   if(((a+b) == c) or ((a+c) == b) or ((b+c) == a))   {
      cout << "S" << endl;
      return 0;
   }

   cout << "N" << endl;

return 0;
}