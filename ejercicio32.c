# include <stdio.h>

int main(){
	
	int valor1, operacion;
	char opcion;
	
	operacion=0;
	do {
		printf("Ingrese un valor: ");
		scanf("%i",&valor1);
		operacion+=valor1;
		
		printf("\nDesea seguir ingresando(s/S): ");
		scanf(" %c",&opcion);
	}while (opcion=='s' || opcion=='S');
	
	printf("\nEl resultado de la operacion es: %i",operacion);
	return 0;
}	
