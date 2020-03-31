#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main ()	{
 	int n;
    	
    cin >> n;
    
    cout << factorial(n) << endl;
return 0;
}
