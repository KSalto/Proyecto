# include <stdio.h>
float calculaMediaA();

int main(){
		float media;
		
		fflush(stdin);
		media=calculaMediaA();
		printf("\nLa media aritmética es %.2f", media);

	return 0;
}

float calculaMediaA(){
	float num1=0, suma=0, i=0,m=0;
	
	
	do {
		printf("\nIngrese un número entero (0 para finalizar): ");
		scanf("%f",&num1);
		suma+=num1;
		i++;
	} while(num1!=0);
	i=i-1;
	m= suma / i;
	return m;
}
