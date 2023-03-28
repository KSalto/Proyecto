# include <stdio.h>
# include <string.h>

int main(){
	char nombre[30], sexo[10];
	int edad;
	
	printf("Ingrese nombre:");
	gets(nombre);
	printf("Ingrese sexo:");
	gets(sexo);
	printf("Ingrese edad:");
	scanf("%i",&edad);
	
	if (strcmp(sexo,"masculino")==0){
		if (edad>=18){
			printf("Su nombre es %s y es mayor de edad %i", nombre, edad);
		}
		else {
			printf("Su nombre es %s y es menor de edad %i", nombre, edad);
			}
	}
	else {
		printf("Su sexo es femenino y su nombre es %s", nombre);
	}
	return 0;
}
