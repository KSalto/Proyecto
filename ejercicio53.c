# include <stdio.h>
# include <stdlib.h>

int main(){
	int letras;
	char *pletras;
	
	printf("Ingrese cuántas letras tendrá la palabra: ");
	scanf("%i",&letras);
	pletras=malloc(letras*sizeof(char)+1);
	fflush(stdin);
	printf("Ingrese la palabra: ");
	gets(pletras);
	printf ("la palabra ingresada es: %s",pletras);
	free(pletras);
	return 0;
}
