#include <stdio.h>

int fibonacci(int n)
{
   if (n == 1)
       return 0;
   else if((n==2) || (n==3))
       return 1;
   else
       return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    int a=0;

      scanf("%d", &a);
      a = a+2;
      printf("%d\n", fibonacci(a));

return 0;
}
