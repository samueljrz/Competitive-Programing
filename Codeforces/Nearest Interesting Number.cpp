#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, aux=0, ans, aux2=0;
	cin >> a;
	ans = a;

	while(a>0) {
		aux += a%10;
		a /= 10;
	}
	
	if(aux%4 == 0) {
		cout << ans;
		return 0;
	}else {
		while(true) {
			if((aux%4 == 0) and (aux2 == 0)) break;
			if(aux2 == 0) {
				ans++;
				aux2 = ans;
				aux=0;
			}
			aux += aux2%10;
			aux2 /= 10;
		}
	}
	cout << ans << endl;
	return 0;
}