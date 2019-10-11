#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

struct times {
   string aluno;
   int habilidade;
};

times v[MAX], s[MAX];
string temp;
int n, t, aux, z=0, pos=1, p, y=0;

int ord(times a, times b) {
   return a.habilidade > b.habilidade;
}

int ord2(times a, times b) {
   return a.aluno < b.aluno;
}

int main () {
   cin >> n >> t;

   aux = t;

   for(int i=0; i<n; i++)  {
      cin >> v[i].aluno >> v[i].habilidade;
   }

   sort(v, v+n, ord);

   while(aux--)  {
      p=0;
      while(y < n)  {
         s[p].aluno = v[y].aluno;
         s[p].habilidade = v[y].habilidade;
         p++;
         y+=t;
      }
      
      y=0;

      cout << "Time " << pos << endl;

	  sort(s, s+p, ord2);
     
      for(int i=0; i<p; i++) {
         cout << s[i].aluno << endl;
      }
      if(aux != 0)   {
         cout << endl;
      }
      z++;
      y = z;
      pos++;
   }
return 0;
}
