#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
	if(a%b == 0){
		return b;
	} 
	else{
	 	return mdc (b, a%b);
	}
}

int mmc(int a, int b) {
	return a * (b / mdc(a, b));
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	unsigned long long a, b, c, d, abcd, bd;
	unsigned long long divd, divs;
	cin >> a >> b >> c >> d;
	divs = mmc(b, d);
	divd = ((divs/b)*a)+((divs/d)*c);
	if(divd%divs == 0) {
		divd /= divs;
		divs = 1;
	}
	int divisor = 2;
	while( divisor < divd || divisor < divs ) {
   		if( (divd % divisor)==0 && (divs % divisor )==0) {
      		divd /= divisor;
      		divs /= divisor;
      		divisor = 2;
   		}else {
      		divisor++;
   		}	
	}
	cout << divd << " " << divs << endl;
	return 0;
}