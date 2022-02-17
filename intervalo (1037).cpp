#include<stdio.h>

int main(void){
	double x;
	printf("Digite o numero: ");
	scanf("%lf", &x);	
	
	if (x > 0 && x <= 25){
		printf("intervalo [0, 25]");}
	if (x > 25 && x <=50){
		printf("intervalo [25, 50]");}
	if (x > 50 && x <=75){
		printf("intervalo [50,75]");}
	if (x > 75 && x <=100){
		printf("intervalo [75,100]");}
		
	else printf("fora do intervalo");
}
