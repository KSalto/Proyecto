# include <stdio.h>

int main(){
	
	char oracion[201];
	int i,palabra;
	
	printf("Ingrese una oracion de hasta 200 caracteres: ");
	gets(oracion);
	
	i=0;
	while(oracion[i]!='\0') {
		if (oracion[i]==' '){
			palabra++;
		}
	i++;
	}
	printf ("La cantidad de palabras de la oracion es: %i",palabra);
	
	return 0;
}
