#include<stdio.h>

int push (int element, int vetor[], int topo){
	if(topo >=0 && topo < 10){
		vetor[topo] = element;
		topo++;
		return topo;
	}else{
		printf("Teste 1");
		printf("Estourou pilha!");
		return topo;
	}
}

int pop(int vetor[], int topo){
	if(topo >= 0){
		topo--;
		int guardaVetor = vetor[topo];
		return guardaVetor;
	}else{
		printf("Teste 2");
		printf("Estourou pilha!");
		return -1;
	}
}

void imprime(int vetor[], int topo){
	printf("\n");
	int aux = topo -1;
	while(aux >= 0){
		printf("%i\n", vetor[aux]);
		aux--;
	}
	printf("\n");
}

int main (void){
	int pilha [10];
	int num, localiza = 0, aux1, aux2, numero;
	int topo = 0;
	printf("Insira ate 10 numeros!\n\n");
	printf("Para sair dite -1!\n\n");
	do{
		printf("Digite o %i numero: ", numero);
		scanf("%i", &num);
		numero++;
		fflush(stdin);
		if(num != -1){
			topo = push(num, pilha, topo);
		}
	}while(num != -1);
	
	imprime(pilha, topo);
	
	printf("Digite a posicao que quer localizar: ");
	scanf("%i", &localiza);
	fflush(stdin);
	aux1 = topo;
	while(aux1 >= 0){
		aux2 = pop(pilha, aux1);
		if(localiza == aux1){
			printf("Numero encontrado eh[%i] na posicao %i", aux1, aux2);
		}
		aux1--;
	}
}
