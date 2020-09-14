#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (ll)1000000007
#define mdc(a, b) (__gcd((a), (b)))

ll a[51];

long long mpow(long long a, long long b)
{
	long long ret = 1;
	while(b)
	{
		if(b & 1) ret = (ret * a) % mod;
		b >>= 1;
		a = (a * a) % mod;
	}
	return ret;
}

int main() {

	ll n, mul = 1, aux, ans=1;
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> a[i];
		mul *= a[i];
	}

	if(n > 1) {
		aux = mdc(a[0], a[1]);
		for(int i=2; i<n; i++) {
			aux = mdc(aux, a[i]);
		}
	}else {
		aux = 1;
	}

	ans = mpow(mul, aux);

	cout << ans << endl;

	return 0;
}