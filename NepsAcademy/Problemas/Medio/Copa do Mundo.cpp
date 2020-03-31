#include <bits/stdc++.h>
using namespace std;

int main ()	{
	queue<char> fila;
	for(int i = 0 ; i <= 15; i++)	{
		fila.push((char)('A'+i));
	}
	
	int r1, r2;
	char t1, t2;
	
	for(int i = 0; i < 15; i++)	{
		cin >> r1 >> r2;
		t1 = fila.front();
		fila.pop();
		t2 = fila.front();
		fila.pop();
		if(r1 > r2)	{
			fila.push(t1);
		}else
			fila.push(t2);
	}
	

	cout << fila.front() << endl;
	
}


