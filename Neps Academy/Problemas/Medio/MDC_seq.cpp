#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
	if(a%b == 0){
		return b;
	} 
	else{
	 	return mdc (b, a%b);
	}
}

int main(){

	vector<int> seq;
	int qtd, t;

	cin >> qtd;

	for(int i = 0; i < qtd; i++){
		int aux;
		cin >> aux;
		seq.push_back(aux);
	}

	t = mdc(seq[0], seq[1]);
	
	for(int i = 2; i < qtd; i++){
		t = mdc(t, seq[i]);
	}

	cout << t << endl;
	
	return 0;
}