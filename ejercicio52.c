# include <stdio.h>
int largo(char *cadena);

int main(){
	char vector[21];
	
	printf("Ingrese una cadena de caracteres: ");
	gets(vector);
	largo(vector);
	
	return 0;
}

int largo(char *cadena){
	
	int i,cuenta=0;
	
	while ((*cadena!='\0')){
		cuenta++;
		cadena++;
	}
	
	if(cuenta>0){
		printf("El largo de la cadena de caracteres es: %i",cuenta);
	}
}
