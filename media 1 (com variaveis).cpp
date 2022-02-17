/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). 
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

*/

#include <stdio.h>
#define P1 3.5
#define P2 7.5

	int main(){	
	double a, b, x;			 
	printf("digite o primeiro numero: ");
	scanf("%lf", &a);	
	printf("digite o segundo numero: ");
	scanf("%lf", &b);	
	
	x = (a * P1 + b * P2) / 11;
	
	printf("x = %lf", x);
	
}	
