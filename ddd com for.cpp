#include<stdio.h>
int main(){
	int ddd;
	int i;
	
	printf("Verificacao de DDD! \n");
		
	for(i=0; i < 3; i++){
		int ddd;
		printf("Digite seu DDD: ");
		scanf("%d",&ddd);
			
		if (ddd==61){
			printf("Brasilia\n");}
		else if (ddd==71){
			printf("Salvador\n");}
		else if (ddd==11){
			printf("Sao paulo\n");}
		else if (ddd==21){
			printf("Rio de janeiro\n");}
		else if (ddd==32){
			printf("Juiz de fora\n");}
		else if (ddd==19){
			printf("Campinas\n");}
		else if (ddd==27){
			printf("Vitoria\n");}
		else if (ddd==31){
			printf("Belo Horizonte\n");}
			
		else printf("DDD nao cadastrado\n");
		
						
	}
		
}
