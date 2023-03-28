# include <stdio.h>

int main (){
	float radio, longitud;
	printf("Proporcione el radio de la circunferencia:");
	scanf("%f",&radio);
	
	longitud=3.1416 * 2 * radio;
	printf("\n La longitud de la circunferencia es: %.2f", longitud);
	return 0;
}
