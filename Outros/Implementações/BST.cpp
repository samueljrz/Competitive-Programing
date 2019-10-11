#include <bits/stdc++.h>
using namespace std;

struct No
{
	No *esq;
	No *dir;
	int chave;
};

void inserir(No **pRaiz, int num) {
	if(*pRaiz == NULL) { // Verifica se o Nó é nulo 
		*pRaiz = (No *) malloc(sizeof(No));
		(*pRaiz)->esq = NULL;
		(*pRaiz)->dir = NULL;
		(*pRaiz)->chave = num;
	}else {
		if(num < (*pRaiz)->chave) inserir(&(*pRaiz)->esq, num); // Se for < aloca a esquerda
		if(num > (*pRaiz)->chave) inserir(&(*pRaiz)->dir, num); // Se for > aloca a direita
	}
}

No *MaiorDireita(No **no) {
	if((*no)->dir != NULL) return MaiorDireita(&(*no)->dir);
	else {
		No *aux = *no;
		if((*no)->esq != NULL) {
			*no = (*no)->esq;
		}else 
			*no = NULL;
		return aux;
	}
}

void remover(No **pRaiz, int num) {
	if(*pRaiz == NULL) {
		cout << "Arvore NULL" << endl;
		return;
	}
	if(num < (*pRaiz)->chave) remover(&(*pRaiz)->esq, num);
	else {
		if(num > (*pRaiz)->chave) remover(&(*pRaiz)->dir, num);
		else {
			No *pAux = *pRaiz;
			if (((*pRaiz)->esq == NULL) && ((*pRaiz)->dir == NULL)) { // Caso não tenha filhos     
                free(pAux);
                (*pRaiz) = NULL; 
            }else {  // Caso so tenha filho a direita
            	if((*pRaiz)->esq == NULL) {
            		(*pRaiz) = (*pRaiz)->dir;
               		pAux->dir = NULL;
                	free(pAux); pAux = NULL;
            	}else {
            		if((*pRaiz)->dir == NULL) {  // Caso so tenha filho a esquerda
            			(*pRaiz) = (*pRaiz)->esq;
               			pAux->esq = NULL;
                		free(pAux); pAux = NULL;
                	}else {  // Caso tenha os dois filhos
            			pAux = MaiorDireita(&(*pRaiz)->esq);  // O maior a direita da subarvore esquerda 
            			pAux->esq = (*pRaiz)->esq;
            			pAux->dir = (*pRaiz)->dir;
            			(*pRaiz)->esq = (*pRaiz)->dir = NULL;
            			free((*pRaiz));  *pRaiz = pAux;  pAux = NULL;
            		}
            	}
            }
		}
	}
}

void preOrdem(No *pRaiz){  //Pré-ordem: raiz, esq, dir;
   if(pRaiz != NULL){
       cout << pRaiz->chave << endl;
       preOrdem(pRaiz->esq);
       preOrdem(pRaiz->dir);
   }
}

void emOrdem(No *pRaiz){  //Em-ordem: esq, raiz, dir;
   if(pRaiz != NULL){
       emOrdem(pRaiz->esq);
       cout << pRaiz->chave << endl;
       emOrdem(pRaiz->dir);
   }
}

void posOrdem(No *pRaiz){  //Pós-ordem: esq, dir, raiz;
   if(pRaiz != NULL){
       posOrdem(pRaiz->esq);
       posOrdem(pRaiz->dir);
       cout << pRaiz->chave << endl;
   }
}

int contarFolhas(No *pRaiz){
  if(pRaiz == NULL)
       return 0;
  if(pRaiz->esq == NULL && pRaiz->dir == NULL)
       return 1;
  return 0 + contarFolhas(pRaiz->esq) + contarFolhas(pRaiz->dir);
}

int contarNos(No *pRaiz){
  if(pRaiz == NULL)
       return 0;
  else
       return 1 + contarNos(pRaiz->esq) + contarNos(pRaiz->dir);
}

int main() {
	No *arv;
	arv = NULL;
	inserir(&arv, 10);
	inserir(&arv, 15);
	inserir(&arv, 7);
	inserir(&arv, 5);
	inserir(&arv, 4);
	preOrdem(arv);
	cout << endl;
	emOrdem(arv);
	cout << endl;
	posOrdem(arv);
	remover(&arv, 5);
	preOrdem(arv);
	cout << endl;
	emOrdem(arv);
	cout << endl;
	posOrdem(arv);
	return 0;
}