#include <iostream>
#include <string>

using namespace std;

int main() {
    string aux;
    int ans[26];
    int vmaxx = 0;

    for(int i=0; i<26; i++) ans[i] = 0;

    for(int i=0; i<4; i++) {
        getline(cin, aux);
        for(int j=0; j<aux.length(); j++) {
            if((aux[j] - 'A') >= 0 and (aux[j] - 'Z') < 26) {
                int ax = aux[j] - 'A';
                ans[ax]++;
            if(ans[ax] > vmaxx) vmaxx = ans[ax];
           }
        }
    }

    int alt = vmaxx;
    for(int i=0; i<alt; i++) {
    	for(int j=0; j<26; j++) {
    		if(ans[j] == vmaxx) {
    			cout << "* ";
    			ans[j]--;
    		}else {
    			cout << "  ";
    		}
    	}
    	vmaxx--;
    	cout << endl;
    }
    for(int i=65; i<91; i++) {
        cout << (char)(i) << " ";
    }
    cout << endl;
    return 0;
}