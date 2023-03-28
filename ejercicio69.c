#include <stdio.h>
#include <stdlib.h>

void cargar();
void imprimir();

int main(){
	
	cargar();
	imprimir();

	return 0;
}

void cargar(){
	FILE *arch;
	arch=fopen("archivo3.dat","wb");
	if (arch==NULL) exit (1);
	int valor;
	printf("Hasta que numero quiere cargar?: ");
	scanf("%i",&valor);
	int i;
	for(i=1;i<=valor;i++){
		fwrite(&i, sizeof(int), 1, arch);
	}
	
	fclose(arch);
}

void imprimir(){
	FILE *arch;
	arch=fopen("archivo3.dat","rb");
	if (arch==NULL) exit (1);
	int x;
    
	fread(&x, sizeof(int), 1, arch);
	while(!feof(arch)){
		printf("%i\n",x);
		fread(&x,sizeof(int),1,arch);
		
	}
	fclose(arch);
}
