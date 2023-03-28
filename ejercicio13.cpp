# include <stdio.h>
# include <math.h>

int main(){
	int num, opcion, cubo;
	printf("Digite un número: \n");
	scanf("%i", &num);
	printf("\n--------------------------\n");
	printf("1. Cubo de un número: \n");
	printf("2. Número par o impar: \n");
	printf("3. Salir \n");
	printf("\n--------------------------\n");
	printf("Seleccione una opción: \n");
	scanf ("%i",&opcion);
	
	switch(opcion){
		case 1:
			cubo=pow(num,3);
			printf("El cubo del número es: %i",cubo);
			break;
		case 2:
			if (num%2==0) printf("El número %i es par",num);
			else printf("El número %i es impar",num);
			break;
		case 3:
			break;
		default: printf("Opcion incorrecta");
	}
	return 0;
}
