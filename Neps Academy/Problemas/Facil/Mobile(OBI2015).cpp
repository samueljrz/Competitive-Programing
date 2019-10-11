#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main () {

   cin >> a;
   cin >> b;
   cin >> c;
   cin >> d;


   if((a==(b+c+d)) and (d == (b+c)) and (b == c))  {
      cout << "S" << endl;
   }else 
      cout << "N" << endl;

return 0;
}