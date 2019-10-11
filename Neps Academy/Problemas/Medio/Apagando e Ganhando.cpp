/* O intuito do codigo é pegar os maiores digitos para que com isso voce possar formar o maior numero, so que ele vai pegar na ordem
inversa por esta empilhando, logo */
#include <bits/stdc++.h>
using namespace std;

stack<char> aux;
stack<char> pilha;
char qtdigitos;
int n, d;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	while(cin >> n >> d and (n or d)) {
		int apagados = 0;
		for(int i=0; i<n; i++) {
			cin >> qtdigitos;
			while((not pilha.empty()) and apagados < d and qtdigitos > pilha.top()) {
				pilha.pop();
				apagados++;
			}
			if(pilha.size() < n-d) pilha.push(qtdigitos);
		}
		while(not pilha.empty()) aux.push(pilha.top()), pilha.pop();
		while(not aux.empty()) cout << aux.top(), aux.pop();
		cout << endl;
	}
	return 0;
}