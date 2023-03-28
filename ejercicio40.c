# include <stdio.h>
void cargaMatriz(int mat[2] [5]);
void imprimir(int mat[2][5]);

int main(){
	
	int matriz[2] [5];
	
	printf("Carga de matriz por columna: \n");
	cargaMatriz(matriz);
	printf("\nMuestra la matriz\n");
	imprimir(matriz);
	
	return 0;
}

void cargaMatriz(int mat[2] [5]){
	int f,c;
	 for (c=0; c<5; c++){
	 	for (f=0; f<2; f++){
	 		printf("Ingrese elemento: ");
	 		scanf("%i",&mat[f][c]);
	 	}
	 }
	
}

void imprimir(int mat[2][5]){
	
	int f,c;
	for(f=0; f<2; f++){
		for (c=0; c<5; c++){
			printf("%i ",mat[f][c]);
		}
		printf("\n");
	}
}
