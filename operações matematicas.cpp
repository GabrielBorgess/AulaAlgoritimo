#include <stdio.h>
	int main(){
	
	int a, b, soma, subtracao, produto, divizao;	
		printf("digite o primeiro numero: ");
		scanf("%d", &a);
		printf ("digite o segundo numero: ");
		scanf("%d", &b);
		
		soma = (a + b); 
		subtracao = (a - b);
		produto = (a * b);
		divizao = (a / b);
		
		printf("soma = %d \n" , soma );
		printf("subtracao = %d \n", subtracao);
		printf("produto = %d \n", produto);
		printf("divizao = %d \n", divizao);	
		
	}
