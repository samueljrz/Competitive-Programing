#include <bits/stdc++.h>
using namespace std;

int x, ans, aux; 

int main ()	{
    cin >> x;
    for(int i=0; i<x; i++)	{
    	cin >> aux;
        ans += aux;
    }
    cout << ans << endl;
    return 0;
}
