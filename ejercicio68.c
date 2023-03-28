#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arch;
	arch=fopen("archivo2.dat","rb");
	if (arch==NULL) exit (1);
	fseek(arch,8,SEEK_SET);
	float valor3;
	fread(&valor3, sizeof(float), 1, arch);
	printf("Primer numero decimal: %.2f\n",valor3);
	float valor4;
	fread(&valor4, sizeof(float), 1, arch);
	printf("Segundo numero decimal: %.2f\n",valor4);
	
	fclose(arch);
	
	return 0;
}
