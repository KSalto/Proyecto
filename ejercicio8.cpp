# include <stdio.h>

int main(){
	int num1, num2;
	printf("Proporcione 2 n�meros: ");
	scanf("%i %i",&num1,&num2);
	
	if (num1>num2){
		printf("El mayor de los 2 n�meros es: %i",num1);
	}
	else if (num2>num1) {
		printf("El mayor de los 2 n�meros es: %i",num2);
	}
	else
	printf("Ambos numeros son iguales");
	return 0;
}
