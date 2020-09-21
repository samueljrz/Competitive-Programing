#include <bits/stdc++.h> 
using namespace std; 

const int SIZE = 26; 

struct TrieNode 
{ 
    struct TrieNode *children[SIZE]; 

    int numberWords;
    bool isEndOfWord; 
}; 

struct TrieNode *getNode(void) 
{ 
    struct TrieNode *pNode = new TrieNode; 

    pNode->isEndOfWord = false; 
    pNode->numberWords = 0;

    for (int i = 0; i < SIZE; i++) 
        pNode->children[i] = NULL; 

    return pNode; 
} 

void insert(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 

    for (int i = 0; i < (int)key.length(); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) {
            pCrawl->children[index] = getNode(); 
        }
        pCrawl->children[index]->numberWords++;
        pCrawl = pCrawl->children[index]; 
    } 

    pCrawl->isEndOfWord = true; 
} 

int search(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 

    for (int i = 0; i < (int)key.length(); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) 
            return 0; 

        pCrawl = pCrawl->children[index]; 
    } 

    if ( pCrawl != NULL ) {
        return pCrawl->numberWords;
    } else {
        return 0;
    }
} 

int main() 
{ 
    
    int N, Q;
    struct TrieNode *root = getNode(); 
    string in;

    cin >> N >> Q;

    while ( N-- ) {
        
        cin >> in;
        
        insert( root, in );
    }
    
    while ( Q-- ) {
        
        cin >> in;   
           
        cout << search( root, in ) << endl;
    }

    return 0; 
} 
