# include <stdio.h>
# include <string.h>

int main(){
	
	char nombre1[21], nombre2[21];
	
	printf("Ingrese el nombre de una persona: ");
	gets(nombre1);
	printf("Ingrese el nombre de otra persona: ");
	gets(nombre2);
	
	if (strcmp(nombre1,nombre2)==0){
		printf("Los dos nombres son iguales");
		}
	else if(strcmp(nombre1,nombre2)>0) {
	printf("El orden alfabético es: %s %s", nombre2, nombre1);	
	}
	else printf("El orden alfabético es: %s %s", nombre1, nombre2);
	
	return 0;
}
