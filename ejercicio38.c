# include <stdio.h>

void carga(int vec[4]);
void buscaMenor(int vec[4]);

int main(){
	int vector[4];
		
	carga(vector);
	buscaMenor(vector);
	
	
	return 0;
}

void carga(int vec[4]){
	int i;
	
	for (i=0; i<4; i++){
		printf("Ingrese un numero entero: ");
		scanf("%i",&vec[i]);
	}
	
}

void buscaMenor(int vec[4]){
	int i;
	int menor=vec[0], posicion=0;
	
	for (i=1; i<4; i++){
		if (menor>vec[i]){
			menor=vec[i];
			posicion=i;
		}
		else if (menor == vec[i]){
			printf("Hay dos numeros iguales");
		}
	}
	printf ("El menor es: %i que se encuentra en la posicion: %i",menor,posicion);
}


