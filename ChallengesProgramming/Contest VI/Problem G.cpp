#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

priority_queue<ll, vector<ll>, greater<ll> > smaller;
priority_queue<ll, vector<ll>, less<ll> > maximum;
ll sum;
vector<ll> ans;

int main() {
	ll n, q, k;

	cin >> n >> q;

	ans.resize(n);

	for(int i=0; i<n; i++) {
		ll aux;
		cin >> aux;
		sum+=aux;
		smaller.push(aux);
		maximum.push(aux);
	}

	ll j = 1;
	ans[0] = sum;
	while(n != 1) {
		ans[j] = sum - smaller.top() - maximum.top() + (maximum.top()-smaller.top());
		sum = ans[j];
		ll aux = (maximum.top()-smaller.top());
		maximum.pop();
		smaller.pop();
		maximum.push(aux);	
		smaller.push(aux);
		n--;
		j++;
	}

	for(int i = 1; i<=q; i++) {
		cin >> k;
		cout << ans[k] << endl;
	}

	return 0;
}
