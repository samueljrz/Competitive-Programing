#include <bits/stdc++.h>
using namespace std;

long long int a[100001];

int main() {
	long long int t, n, ans, sum, aux, aux1;

	cin >> t;

	while(t--) {
		cin>> n;

		for(int i=0; i<n; i++) {
			cin >> a[i];
		}

		sort(a, a+n);

		aux = 0;
		aux1 = 0;
		sum = 0;
		ans = -999999999;

		for(int i=0; i<n; i++) {
			aux = (n-i)*a[i] + sum + aux1;
			if(aux > ans) {
				ans = aux;
			}
			if(a[i] == a[i+1]) {
				aux1 += a[i];
			}else if(a[i] != a[i+1]) {
				sum+=(a[i]*(-1)) - aux1;
				aux1=0;
			}
			
		}

		cout << ans << endl;
	}

	return 0;
}