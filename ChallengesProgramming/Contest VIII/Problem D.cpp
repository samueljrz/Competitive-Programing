#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (ll)1000000007

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

int main () {
    ll a, b;

    cin >> a >> b;

    cout << mpow(a, b) % mod << endl;

    return 0;
}