#include <stdio.h>
#include <stdlib.h>
#define termo 5

char pilha [termo];
int topo = 0;
int opcao;

void exibir (void){
	printf("\n");
	if(topo == 0){
		printf("Pilha vazia!");
	}
	for(int i = topo-1; i>=0; i--){
		printf("Na posicao %d temos %c ", i, pilha[i]);
	}
	printf("\n");
	system("pause");
}

void inserir (void){
	if(topo == termo){
		printf("A pilha esta cheia!");
	}else{
		printf("Inserir valor: \n");
		scanf("%s", &pilha[topo]);
		topo++;
		}
	exibir();
}

void remover (void){
	if(topo == 0){
		printf("Pilha vazia!");
	}else{
		printf("Valor %c retirado da pilha!", pilha[topo -1]);
		topo--;
	}
	exibir();
}

void menu (void){
	
	printf("\n");
	printf("Para inserir dados -> 1\n");
	printf("Para remover dados -> 2\n");
	printf("Para exibir dados  -> 3\n");
	printf("Para sair          -> 4\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1: inserir();
			break;
		case 2: remover();
			break;
		case 3: exibir();
			break;
	}
	
}

int main(){
	while(opcao != 4){
		menu();
	}
}
