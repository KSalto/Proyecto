# include <stdio.h>
# include <string.h>

int main(){
	
	char nombre[21], clave[9];
	
	printf("Ingrese el nombre completo: ");
	gets(nombre);
	printf("Ingrese la clave: ");
	gets(clave);
	
	char clavecorrecta[9]="abc123";
	if (strcmp(clave,clavecorrecta)==0){
		printf("La clave es correcta");
		}
	else printf("La clave es incorrecta");
	
	return 0;
}
