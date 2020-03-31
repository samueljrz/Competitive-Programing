#include <bits/stdc++.h>
using namespace std;

int n, ans=1, tst, anstst=1, j=0;
vector<int> v;
vector<int> vtst;
bool ver = false;

int main () {

	cin >> n;
	tst = n;

	while(tst) {
		if(tst < 10 and tst > 0) {
			vtst.push_back(tst%10);
			j++;
			break; 
		}
		//if(tst%10 != 9) {
		tst = tst - (tst%10) - 1;
		//}else

		if((tst%10) > 0) {
			j++;
		}
		vtst.push_back(tst%10);
		tst /= 10;
		
	}

	if(n < 10) {
		cout << n << endl;
		return 0;
	}else {
		if(n%10) {
			while(n) {
			v.push_back(n%10);
			n /= 10;
			}
		}else {
			n -= 1;
			while(n) {
			v.push_back(n%10);
			n /= 10;
			}
		}
	}

	for(int i=0; i<v.size(); i++) {
		ans *= v[i];
		if(j--) {
			anstst *= vtst[i];
			cout << vtst[i] << " ";
		}
	}
		

	if(ans < 9 and anstst < 9) {
		cout << '9' << endl;
	}else
		if(anstst > ans) {
			cout << anstst << endl;
		}else {
			cout << ans << endl;
		}
	return 0;
}