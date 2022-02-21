
#include<stdio.h>
#include<math.h>
int main(void){
	
	double x1, x2, a, b, c, delta;
	
	printf("insira o valor de a:");
	scanf("%lf", &a);
	
	printf("insira o valor de b:");
	scanf("%lf", &b);
	
	printf("insira o valor de c:");
	scanf("%lf", &c);
	
	delta = (b*b) - (4*a*c);
	
	x1 = ((-b) + sqrt(delta))/(2 * a);
	x2 = ((-b) - sqrt(delta))/(2 * a);
	
	if(delta < 0 || 2 * a == 0)
		printf("Impossivel calcular");
	else {
		printf("X1 = %lf\n", x1);
		printf("X2 = %lf", x2);
	}				
}
