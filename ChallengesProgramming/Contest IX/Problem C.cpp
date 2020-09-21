#include <bits/stdc++.h> 

#define ALPHABET_SIZE 26

using namespace std;
 
struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];
    bool isEndOfWord;
    int cont;
};
 
struct TrieNode *getNode(void) {
    struct TrieNode *pNode = new TrieNode;
 
    pNode->isEndOfWord = false;
    pNode->cont = 0;
    
    for(int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;

    return pNode;
} 
 
void insert(struct TrieNode *root, string key) {
    struct TrieNode *pCrawl = root;
 
    for(int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if(!pCrawl->children[index])
            pCrawl->children[index] = getNode();
        
        pCrawl = pCrawl->children[index];
        pCrawl->cont++;
    }
    pCrawl->isEndOfWord = true;
}

int search(struct TrieNode *root, string key) {
    struct TrieNode *pCrawl = root;
  
    for(int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if(!pCrawl->children[index]) return 0; 
        
        pCrawl = pCrawl->children[index]; 
    }
  
    return pCrawl->cont;
}
 
int main() {
    struct TrieNode *root = getNode();
    int n; cin>>n;
    
    while(n--) {
        string a,b; cin>>a>>b;
        if(a == "add") insert(root,b);
        else cout << search(root, b) << '\n';
        
    }
}
