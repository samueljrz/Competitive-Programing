#include <bits/stdc++.h>
using namespace std;

struct nadador
{
	int tempo, pos;
};

nadador v[3];

int ord (nadador a, nadador b)	{
	return a.tempo<b.tempo;
}

int main ()	{
	for(int i=0; i<3; i++){
		cin >> v[i+1].tempo;
		v[i+1].pos = i+1;
	}

	sort(v+1, v+4, ord);

	cout << v[1].pos << endl;
	cout << v[2].pos << endl;
	cout << v[3].pos << endl;
return 0;
}