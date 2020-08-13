#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
    string s;
    map<char, int> mp;
    
    getline(cin, s);
    for(int i=0; i < s.size(); i++) mp[s[i]]++;
    
    char respChar = ' ';
    int count = 0;
    for(auto evenValue: mp)
        if(evenValue.second > count) {
            respChar = evenValue.first;
            count = evenValue.second;
        }
        
    cout << respChar << " " << count << endl;
}
