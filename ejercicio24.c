# include <stdio.h>

void calculaCuadrado(int);

int main(){
	int numero;
	
	printf("Proporcione un numero desde el cual calcularemos el cuadrado: ");
	scanf("%i",&numero);
	calculaCuadrado(numero);
	
	return 0;
}

void calculaCuadrado(int n){
	int i,cuadrado;
		
	for (i=n; cuadrado<1000; i++){
		cuadrado=i*i;
		printf("El cuadrado de %i es: %i\n",i,cuadrado);
	}
}
