   #include <bits/stdc++.h>
   using namespace std;

   long long int m, n, aux, result;

   int main ()    {

      cin >> n >> m;
      result = -1;
      if(m%n == 0)    {
         result = 0;
         aux = m / n;
         while(aux%3 == 0)    {   
            aux /= 3;
            result++;
         }
         while(aux%2 == 0)    {
            aux /= 2;
            result++;
         }   
       }
      if(aux != 1)  {
         result = -1; 
      }
      
      cout << result << endl;

   return 0;
   }

