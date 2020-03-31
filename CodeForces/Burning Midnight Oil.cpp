#include <bits/stdc++.h>
using namespace std;

bool ver = true;
int n, k;
long int ini = 1;
long int fim;

int somatoria(long int x, int y) {
	//duas variaveis, quando o outro for 0
	long long int = z; 
	while() {
		z+= x/;
		if(z == y) {
			return x;
		}
	}
	return z;
}

int busca_binaria(long int begin, long int end, int val) {
	long int meio
	while(begin <= end) {
		meio = (begin+end)/2;
		if(somatoria(meio, val) == val) return meio;
		else if(somatoria(meio, val) < val) begin = meio+1;
		else if(somatoria(meio, val) > val) end = meio-1;
	}
	return -1;
}

int main() {
	cin >> n >> k;
	fim = n;
	busca_binaria(ini, fim, k);
	return 0;
}