#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;

ll _sieve_size;
bitset<1000001> bs;
vector<ll> primes;
stack<ll> q;
vector<ll> s;

void sieve(ll upperbound) {
	_sieve_size = upperbound + 1; 
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i=2; i<=_sieve_size; i++) {
		if (bs[i]) {
			for (ll j=i*i; j<=_sieve_size; j+=i) {
				bs[j] = 0;
			}
			primes.push_back((ll)i);
		}
	}
} 

bool isPrime(ll N) { 
	if (N <= _sieve_size) return bs[N]; 
	
	for (ll i=0; i<(ll)primes.size(); i++){
		if (N % primes[i] == 0) {
			return false;
		}
	} 
	return true; 
}

bool tst(ll N) {
	ll res=0;
	while(N>0) {
		res += N%10;
		N /= 10;
	}
	if(isPrime(res)) {
		return true;
	}
	return false;
}

int main() {
	sieve(1000001);

	int n;

	cin >> n;

	while(n--) {
		ll a, b, ans=0;
		cin >> a >> b;
		for(int i=a; i<=b; i++) {
			if(isPrime(i) and tst(i)) {
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
