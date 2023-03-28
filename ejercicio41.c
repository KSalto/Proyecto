# include <stdio.h>
void cargaMatriz(int mat[3][4]);
int mayor(int mat[3][4]);

int main(){
	int matriz[3][4];
	
	cargaMatriz(matriz);
	printf("El mayor elemento de la matriz es: %i",mayor(matriz));
	
	return 0;
}

void cargaMatriz(int mat[3][4]){
	int f,c;
	
	for (f=0; f<3; f++){
		for (c=0; c<4; c++){
			printf("Ingrese el elemento: ");
			scanf("%i",&mat[f][c]);
			
		}
	}
}

int mayor(int mat[3][4]){
	int f,c,may;
	
	may=mat[0][0];
	for (f=1; f<3; f++){
		for (c=1; c<4; c++){
			if (may<mat[f][c]){
				may=mat[f][c];
			}	
		}
	}
	
	return may;
}
