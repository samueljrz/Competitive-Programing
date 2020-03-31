#include <bits/stdc++.h>
using namespace std;

int l, c, total1, total2;

int main ()    {

   cin >> l;
   cin >> c;

   total1 = (l * c) + ((l-1)*(c-1));
   total2 = 2*(l-1) + 2*(c-1);

   cout << total1 << endl;
   cout << total2 << endl;

return 0;
}