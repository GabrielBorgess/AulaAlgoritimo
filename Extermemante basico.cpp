/* Leia 2 valores inteiros e armazene-os nas vari�veis A e B. 
Efetue a soma de A e B atribuindo o seu resultado na vari�vel X. 
Imprima X conforme exemplo apresentado abaixo. */

#include <stdio.h>

int main(){
	int a, b, x;
	printf("Usuario lendaario, digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Usuario lendaario, digite o segundo numero: ");
	scanf("%d", &b);
	
	x = a + b; //comando de atribui��o = ; operador matem�tico + 
	
	printf("x = %d", x);
    
//floar coloca 6 casas decimais; %1.f serve para limitar a uma casa decimal

}
