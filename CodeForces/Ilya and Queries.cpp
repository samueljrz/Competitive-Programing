#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;
string in;
int soma[100500];
int result[100500];


int main (){

	cin >> in;	
	cin >> m;

	n = in.size();

	for(int i = 0;i < n;i++){
		if(in[i] == in[i + 1]){
			soma[i + 1] = soma[i] + 1;
		}else
			soma[i + 1] = soma[i];
	}

	for(int i = 1;i <= m;i++){
		cin >> a;
		cin >> b; 
		result[i] = (soma[b - 1] - soma[a - 1]);
	}

	for(int i = 1;i <= m;i++){
		cout << result[i] << endl;
	}

	return 0;
}