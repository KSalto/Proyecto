# include <stdio.h>
# include <math.h>

int main(){
	int num, opcion, cubo;
	printf("Digite un n�mero: \n");
	scanf("%i", &num);
	printf("\n--------------------------\n");
	printf("1. Cubo de un n�mero: \n");
	printf("2. N�mero par o impar: \n");
	printf("3. Salir \n");
	printf("\n--------------------------\n");
	printf("Seleccione una opci�n: \n");
	scanf ("%i",&opcion);
	
	switch(opcion){
		case 1:
			cubo=pow(num,3);
			printf("El cubo del n�mero es: %i",cubo);
			break;
		case 2:
			if (num%2==0) printf("El n�mero %i es par",num);
			else printf("El n�mero %i es impar",num);
			break;
		case 3:
			break;
		default: printf("Opcion incorrecta");
	}
	return 0;
}
