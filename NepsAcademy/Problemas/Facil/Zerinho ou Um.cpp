#include <bits/stdc++.h>
using namespace std;
int main () {
    char a, b, c;
    cin >> a >> b >> c;
    if(a != b and a != c)	{
     	cout << 'A' << endl;
    }else if(b != c and b != a)	{
        cout << 'B' << endl;
    }else if(c != b and c != a)	{
        cout << 'C' << endl;
    }else {
         cout << '*' << endl;
     }
     return 0;
}
