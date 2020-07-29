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

int main() {
	
	sieve(1000001);

	ll w;

	cin >> w;

	while(w--) {
		ll x;
		cin >> x;
		if(isPrime(x)) {
			s.push_back(x);
		}else {
			q.push(x);
		}
	}

	for(int i=0; i<s.size(); i++) {
		if(i == s.size()-1) {
			cout << s[i] << endl;
		}else {
			cout << s[i] << " ";
		}
	}

	while(!q.empty()) {
		if(!(q.size()-1)) {
			cout << q.top() << endl;
		}else {
			cout << q.top() << " ";
		}	
		q.pop();
	}

	return 0;
}