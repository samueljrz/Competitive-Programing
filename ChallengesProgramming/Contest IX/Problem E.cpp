#include<bits/stdc++.h>

#define MOD 1000000007
#define INT_SIZE 32 
 
using namespace std;
 
typedef long long ll;
 
struct TrieNode {
    int value;
    TrieNode *arr[2];
};

TrieNode *newNode() {
    TrieNode *temp = new TrieNode;
    temp->value = 0;
    temp->arr[0] = temp->arr[1] = NULL;
    
    return temp;
}
 
void insert(TrieNode *root, int pre_xor) {
    TrieNode *temp = root;

    for(int i = INT_SIZE-1; i >= 0; i--) {
        bool val = pre_xor & (1<<i);
 
        if (temp->arr[val] == NULL) temp->arr[val] = newNode();
 
        temp = temp->arr[val];
    }
 
    temp->value = pre_xor;
}
 
int query(TrieNode *root, int pre_xor) {
    TrieNode *temp = root;
    for (int i=INT_SIZE-1; i>=0; i--) {
        bool val = pre_xor & (1<<i);
 
        if (temp->arr[val]!=NULL) temp = temp->arr[val];
        else if (temp->arr[1-val] != NULL) temp = temp->arr[1-val];
    }

    return temp->value;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, size = 1e5 + 1, maxsize = 0;
    cin>>n;
    vector<ll> seq;
    seq.assign(size, 0LL);
    seq[0] = 1;
    
    for(int i = 0; i < n; i++) {
        int x; cin>>x;
        for(int j = maxsize; j >= 0; j--) {
            if(seq[j]) {
                seq[j+x] = (seq[j+x] + seq[j])%MOD;
                maxsize = max( maxsize, j+x );
            }
        }
    }
    
    TrieNode *root = newNode();
 
    for(int i = 1; i < size; i++)
        if(seq[i] > 0) insert(root, i);
    
    int q; cin>>q;
    while(q--) {
        int x; cin>>x;
        ll res = query(root, x);
        cout << res << " " << seq[res] << '\n';
    }
}
