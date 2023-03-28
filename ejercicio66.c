#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arch;
	arch=fopen("archivo2.dat","wb");
	if (arch==NULL) exit (1);
	int valor1;
	printf("Ingrese el primer numero entero: ");
	scanf("%i",&valor1);
	fwrite(&valor1, sizeof(int), 1, arch);
	int valor2;
	printf("Ingrese el segundo numero entero: ");
	scanf("%i",&valor2);
	fwrite(&valor2, sizeof(int), 1, arch);
	float valor3;
	printf("Ingrese el primer numero decimal: ");
	scanf("%f",&valor3);
	fwrite(&valor3, sizeof(float), 1, arch);
	int valor4;
	printf("Ingrese el segundo numero decimal: ");
	scanf("%f",&valor4);
    fwrite(&valor4, sizeof(float), 1, arch);
	fclose(arch);
    printf("Se creo un archivo binario que almacena dos int y dos float.");

    getch();	
	return 0;
}
