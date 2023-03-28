# include <stdio.h>
float calculaMediaA(int, int);

int main(){

	int num1, num2;
	

		fflush(stdin);
		printf("\nIngrese un número entero: ");
		scanf("%i",&num1);
		printf("\nIngrese otro número entero: ");
		scanf("%i",&num2);
		printf("\nLa media aritmética de %i y %i es %f", num1,num2, calculaMediaA(num1,num2));

	return 0;
}

float calculaMediaA(int n1, int n2){
	float mediaA;
	mediaA= (n1 + n2) / 2;
	return mediaA;
}
