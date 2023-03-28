# include <stdio.h>

int main(){
	int vector1[4],vector2[4],vector3[4];
	int i,j;
	
		
	for (i=0; i<4; i++) {
		printf("Ingrese un numero del primer vector: ");
		scanf("%i", &vector1[i]);
	}
	
	for (j=0; j<4; j++) {
		printf("Ingrese un numero del segundo vector: ");
		scanf("%i", &vector2[j]);
	}
	
	for (i=0; i<4; i++) {
		vector3[i]=vector1[i]+vector2[i];
		printf("\nEl vector resultante es: %i",vector3[i]);
	}
	
	return 0;
}
