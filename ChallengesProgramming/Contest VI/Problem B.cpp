#include <bits/stdc++.h>

using namespace std;

int main() {
      ios::sync_with_stdio(0);
      cin.tie(0);
    
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        map<char, int> mp;

        for(int i=0; i < s.size(); i++) mp[s[i]]++;

        int resp = 0;

        for(auto evenValue: mp)
            resp += evenValue.second%2==0 ? 0 : 1;
        
        if(resp > 0) resp--;

        cout << resp << endl;
    }
}
