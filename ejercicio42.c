# include <stdio.h>
# include <string.h>
void cargarNombres(char mat[5][21]);
void muestraMatriz(char mat[5][21]);
void buscaEnMatriz(char mat[5][21]);

int main(){
	
	char matriz[5][21];
	
	cargarNombres(matriz);
	printf("Los datos cargados son\n");
	muestraMatriz(matriz);
	buscaEnMatriz(matriz);
	
	return 0;
}

void cargarNombres(char mat[5][21]){
	
	int f;
	for (f=0;f<5;f++){
		printf ("Ingrese el nombre en la matriz: ");
		gets(mat[f]);
	}
	
}

void muestraMatriz(char mat[5][21]){
	
	int f;
	for (f=0;f<5;f++){
		printf ("%s\n",mat[f]);
		
	}
	
}

void buscaEnMatriz(char mat[5][21]){
	
	int f, encuentra=0;
	char nombre[21];
	
	printf("\nIngrese un nombre para buscarlo en la matriz: ");
	gets(nombre);
	for (f=0;f<5;f++){
		if (strcmp(nombre,mat[f])==0){
			encuentra++;
			
		}
				
	}
	
	if (encuentra>0) printf("\nNombre encontrado en la matriz");
	else printf("\nNombre no encontrado en la matriz");	
}
