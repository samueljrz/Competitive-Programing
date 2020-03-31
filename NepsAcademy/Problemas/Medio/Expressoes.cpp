#include <bits/stdc++.h> 
using namespace std;

stack<char> pilha;
string expressao[20];
int n;

int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> expressao[i];
	}
	for(int i=0; i<n; i++) {
		int ver = 0;
		for(int j=0; j<expressao[i].size(); j++) {
			if(expressao[i][j] == '(' or expressao[i][j] == '[' or expressao[i][j] == '{') {
				pilha.push(expressao[i][j]);
				ver++;
			}else if(expressao[i][j] == ')' and not pilha.empty()) {
				if('(' == pilha.top()) {
					pilha.pop();
					ver--;
				}else{
					ver++;
					break;
				}
			}else if(expressao[i][j] == ']' and not pilha.empty()) {
				if('[' == pilha.top()) {
					pilha.pop();
					ver--;
				}else{
					ver++;
					break;
				}
			}else if(expressao[i][j] == '}' and not pilha.empty()) {
				if('{' == pilha.top()) {
					pilha.pop();
					ver--;
				}else{
					ver++;
					break;
				}
			}else if(pilha.empty() and (expressao[i][j] == ')' or expressao[i][j] == '}' or expressao[i][j] == ']')) {
				ver++;
			}
		}
		if(ver == 0) {
			cout << 'S' << endl;	
		}else
			cout << 'N' << endl; 
	}
	return 0;
}
