# include <stdio.h>
# include <string.h>
void cargarNombres(char mat[5][21]);
void muestraMatriz(char mat[5][21]);
void ordenaEnMatriz(char mat[5][21]);

int main(){
	
	char matriz[5][21];
	
	cargarNombres(matriz);
	printf("Los datos cargados son\n");
	muestraMatriz(matriz);
	printf("\nMatriz ordenada");
	ordenaEnMatriz(matriz);
	muestraMatriz(matriz);
	
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

void ordenaEnMatriz(char mat[5][21]){
	int f, i;
	char aux[21];
	
	for (f=0;f<4;f++){
		for (i=0; i<4; i++){
			if (strcmp(mat[i],mat[i+1])>0){
				strcpy(aux,mat[i]);
				strcpy(mat[i],mat[i+1]);
				strcpy(mat[i+1],aux);
			}
		}
	}
	
	
}
