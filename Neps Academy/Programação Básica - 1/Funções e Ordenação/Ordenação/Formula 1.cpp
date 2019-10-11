#include <iostream>
#include <cstring>
using namespace std;

int gp, p, s, k;
int granprix[101][101], testcase[101], pontuacao[101];

int main ()	{

	int m;

	while(cin >> gp >> p && (gp || p))	{
		for (int i=0; i<gp; i++)	{
   			for (int j=0; j<p; j++)	{
    			cin >> granprix[i][j];
   			}	
  		}

		cin >> s;

		while(s--)	{
			   memset(pontuacao, 0, sizeof(pontuacao)); 
   	     	memset(testcase, 0, sizeof(testcase));
   			cin >> k;

   			for (int i=0; i<k; i++)
    			cin >> testcase[i];

   			for (int i=0; i<gp; i++)	{
    			for (int j=0; j<p; j++)	{
     				pontuacao[j] += testcase[granprix[i][j]-1];
 				}
   			}

   			m = 0;

   			for (int i=0; i<p; i++)	{
    			if(pontuacao[i] > m)	
     				m = pontuacao[i];
   			}

   			bool ver = true;

   			for(int i=0; i<p; i++)	{
   				if(pontuacao[i] == m)	{
   					if(ver)	{
   						cout << (i+1);
   						ver = false;
   					}else	{
   						cout << " " << (i+1);
   					}
   				}
   			}
   			cout << endl;
		}
	}
return 0;
}