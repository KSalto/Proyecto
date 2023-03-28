# include <stdio.h>

void carga(int vec[5]);
void ordenaMayor(int vec[5]);
void ordenaMenor(int vec[5]);
void muestra(int vec[5]);


int main(){
	int vector[5];
	
	printf("Comienza la carga del vector\n");	
	carga(vector);
	printf("\nSe ordena de mayor a menor");
	ordenaMayor(vector);
	muestra(vector);
	printf("\nSe ordena de menor a mayor");
	ordenaMenor(vector);
	muestra(vector);
	
	
	return 0;
}

void carga(int vec[5]){
	int i;
	
	for (i=0; i<5; i++){
		printf("Ingrese un numero entero: ");
		scanf("%i",&vec[i]);
	}
	
}

void ordenaMayor(int vec[5]){
	int i,j;
		
	for (i=0; i<4; i++){
		
		for (j=0; j<4-i;j++){
			if (vec[j]<vec[j+1]){
				int aux=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
			}
		}
		
	}
	
}

void ordenaMenor(int vec[5]){
	int i,j;
		
	for (i=0; i<4; i++){
		
		for (j=0; j<4-i;j++){
			if (vec[j]>vec[j+1]){
				int aux=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
			}
		}
		
	}
		
}

void muestra(int vec[5]){
	int i;
	
	for (i=0; i<5; i++){
		printf("\n%i",vec[i]);
	}
	
}

