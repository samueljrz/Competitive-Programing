#include <bits/stdc++.h>

using namespace std;

int main () {

    int T, i, sum;
    string str;
    int K;

    cin >> T;

    while(T--) {
    	cin >> str >> K;

	    reverse(str.begin(), str.end());

	    bitset<1001> BT(str);	

	    i=0;

	    sum=0;

	    while(i < str.size()){
	        if(BT[i] == 0) {
	        	if(i+K > str.size()) {
	        		sum = -1;
	        		break;
	        	}else {
	        		for(int j=i; j<K+i; j++) {
	        			BT[j].flip();
	        		}
	        		sum++;
	        	} 
	        }
	 		i++;
	    }

	    cout << sum << endl;
	}

    return 0;

}