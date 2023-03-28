# include <stdio.h>
# include <string.h>
void cargarPaises(char mat[5][41],int vec[5]);
void ordenarAlfabeticamente(char mat[5][41],int vec[5]);
void mostrarPaisesOrdenados(char mat[5][41],int vec[5]);
void ordenarCantHabitantes(char mat[5][41],int vec[5]);

int main(){
	char matriz[5][41];
	int vector[5];
	
	printf("Carga de Paises y Habitantes\n");
	cargarPaises(matriz,vector);
	printf("\nPaises y Habitantes ordenados alfabeticamente");
	ordenarAlfabeticamente(matriz,vector);
	mostrarPaisesOrdenados(matriz,vector);
	printf("\nPaises y Habitantes ordenados por mayor cantidad de Habitantes");
	ordenarCantHabitantes(matriz,vector);
	mostrarPaisesOrdenados(matriz,vector);
	return 0;
}

void cargarPaises(char mat[5][41],int vec[5]){
	int i;
	
	for (i=0;i<5;i++){
		printf("Ingrese nombre del pais: ");
		gets(mat[i]);
		printf("Ingrese cantidad de habitantes: ");
		scanf("%i",&vec[i]);
		fflush(stdin);	
	}
	
	
}

void ordenarAlfabeticamente(char mat[5][41],int vec[5]){
	int auxhab=0,i,j;
	char auxpais[41];
	
	for (i=0;i<4;i++){
		for (j=0;j<4-i;j++){
			if (strcmp(mat[j],mat[j+1])>0){
				strcpy(auxpais,mat[j]);
				strcpy(mat[j],mat[j+1]);
				strcpy(mat[j+1],auxpais);
				auxhab=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=auxhab;
			}
		}
	}
}

void mostrarPaisesOrdenados(char mat[5][41],int vec[5]){
	int i;
	
	for (i=0; i<5; i++){
		printf("\n %s - %i",mat[i],vec[i]);
	}
}

void ordenarCantHabitantes(char mat[5][41],int vec[5]){
	int auxhab=0,i,j;
	char auxpais[41];
	
	for (i=0;i<4;i++){
		for (j=0;j<4-i;j++){
			if (vec[j]<vec[j+1]){
				strcpy(auxpais,mat[j]);
				strcpy(mat[j],mat[j+1]);
				strcpy(mat[j+1],auxpais);
				auxhab=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=auxhab;
			}
		}
	}
	
}
