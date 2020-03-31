#include <bits/stdc++.h>
using namespace std;

int a, b, c;
long double ang;

int main () {

   cin >> a >> b >> c;
   
   //deixar em ordem crescente
   if(a > c)
      swap(a, c);
   if(b > c)
      swap(b, c);
   if(a > b)
      swap(a, b);
   //a <= b <= c  

   if((a+b) <= c) {
      cout << 'n' << endl;
      return 0;      
   }
   //Deixando em ordem cescente so precisa analizar um angulo  
   ang = acos((pow(c, 2) - pow(b,2) - pow(a, 2))/(-2*a*b));
   ang = ang*180/3.14; // convetendo de radiano para grau   

   if(c*c == (a*a + b*b) ){
      cout << 'r' << endl;
   }else if(ang < 90.0) {
      cout << 'a' << endl;
   }else{
      cout << 'o' << endl;
   }
   
   return 0;
}
