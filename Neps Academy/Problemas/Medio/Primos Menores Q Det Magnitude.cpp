#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<pii> vpii;

ll _sieve_size;
bitset<10000010> bs;
vi primes;

void sieve(ll upperbound) {
	_sieve_size = upperbound + 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
		for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
		primes.push_back((int)i);
	} 
}

bool isPrime(ll N) {
	if (N <= _sieve_size) return bs[N];
	for (int i = 0; i < (int)primes.size(); i++)
		if (N % primes[i] == 0) return false;
return true;
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n;
	cin >> n;
	sieve(n-1);
	for(int i=0; i<primes.size(); i++) {
		if(i == primes.size()-1) {
			cout << primes[i];
		}else {
			cout << primes[i] << " ";
		}
	}
	return 0;
}