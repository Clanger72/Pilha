#include<stdio.h>
#include<stdlib.h>

typedef struct pilha{
	int num;
	struct pilha *prox;
}Pilha;

int numero;
int *op;
Pilha *pilhaGlobal = NULL;
void imprimir(Pilha *p);
Pilha* inserir (Pilha *p, int numero);
Pilha* remover(Pilha *p);
void menu(int *op);

Pilha* inserir (Pilha *p){
	int numero;
	Pilha *novo = (Pilha*) malloc(sizeof(Pilha));
	printf("Digite um termo: ");
	scanf("%i", &numero);
	novo->num = numero;
	novo->prox = p;
	system("cls");
	return novo;
}

Pilha* remover(Pilha *p){
	if(p == NULL){
		printf("Pilha vazia!");	
	}else{
		printf("Termo %i removido\n", p->num);
		p = p->prox;
	}
	system("PAUSE");
	system("cls");
	return p;
}

void imprimir(Pilha *p){
	if(p == NULL){
		printf("Pilha vazia!\n");
	}else{
		Pilha *aux = p;
		printf("\n----------------Resultado-----------\n");
		while(aux != NULL){
			printf("%i ", aux->num);
			aux = aux->prox;
		}
		printf("\n----------------Resultado-----------\n");
	
	}
		system("PAUSE");
		system("cls");
}

void menu(int *op){
	printf("\n");
	printf("1 - Inserir\n");
	printf("2 - Remover\n");
	printf("3 - Imprimir\n");
	printf("4 - Sair\n");
	printf("Escolha");
	scanf("%i", op);
	printf("\n");
	switch(*op){
		case 1: pilhaGlobal = inserir(pilhaGlobal);
			break;
		case 2: pilhaGlobal = remover(pilhaGlobal);
			break;
		case 3: imprimir(pilhaGlobal);
			break;
		case 4: break;
	}
}

int main(){
	int valorQualquer = 0;
	op = &valorQualquer;
	while(*op != 4){ 
		menu(op);	
	}		
}
