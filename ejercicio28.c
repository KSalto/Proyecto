# include <stdio.h>

int main(){
	float alturas[5],suma,promedio;
	int i, altas, bajas;
	
	suma=0;
	promedio=0;
	altas=0;
	bajas=0;
	
	for (i=0; i<5; i++) {
		printf("Ingrese la altura de la persona: ");
		scanf("%f", &alturas[i]);
		suma+=alturas[i];
	}
	promedio=suma/5;
	
	for(i=0; i<5; i++){
		if (alturas[i]>promedio){
			altas++;
		}
		else {
			bajas++;
		}
	}
	
	printf("\nEl promedio de alturas es: %.2f",promedio);
	printf("\nLa cantidad de personas mas altas del promedio son: %i",altas);
	printf("\nLa cantidad de personas mas bajas del promedio son: %i",bajas);
	
	return 0;
}
