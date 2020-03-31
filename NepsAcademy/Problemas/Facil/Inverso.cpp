#include <bits/stdc++.h>
using namespace std;

int main() {
	int v[10];
	for(int i=0; i<10; i++, cin>>v[i]);
	for(int i=9; i>=0; i--, cout<<v[i+2]<<endl);
	return 0;
}