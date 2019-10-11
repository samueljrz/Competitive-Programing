#include <bits/stdc++.h>

using namespace std;	

#define endl '\n'

bool primo(int x)	{
	if(x == 1)	{
		return false;
	}
	for(int i=2; i<ceil(sqrt(x)); i++) {
		if(x==2)
			return true;
		if(x%i!=0)
			continue;
		else
			return false;
	}
return true;
}

int main ()	{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int x;
	
	cin >> x;

	if(primo(x))	{
		cout << "S" << endl;
	}else	{
		cout << "N" << endl;
	}
return 0;
}