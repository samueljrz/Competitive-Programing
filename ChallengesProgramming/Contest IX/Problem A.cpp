#include <bits/stdc++.h> 
using namespace std; 

const int SIZE = 30; 

int quantidade = 1;

struct TrieNode { 
    struct TrieNode *children[SIZE]; 
}; 

struct TrieNode *getNode(void) { 
    struct TrieNode *pNode = new TrieNode; 

    for (int i = 0; i < SIZE; i++) 
        pNode->children[i] = NULL; 

    return pNode; 
} 

void insert(struct TrieNode *root, string key) { 
    struct TrieNode *pCrawl = root; 

    for (int i = 0; i < (int)key.length(); i++) { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]){
            quantidade++; 
            pCrawl->children[index] = getNode(); 
        }
        pCrawl = pCrawl->children[index]; 
    } 
} 

int main() { 
    
    int N;
    string in;
    struct TrieNode *root = getNode();

    cin >> N;
    
    while (N--) {
        cin >> in;
        insert(root, in);
    }
 
    cout << quantidade << endl; 
 
    return 0; 
} 
