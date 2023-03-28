# include <stdio.h>

int main(){
	float vector[10];
	int i, mayor, menor;
	
		
	for (i=0; i<10; i++) {
		printf("Ingrese el numero: ");
		scanf("%f", &vector[i]);
		
	}
	
	mayor=0;
	menor=0;	
	for(i=0; i<10; i++){
		if (vector[i]>vector[i+1]){
			mayor++;
		}
		else menor++;		
	}
	
	if (mayor==1){
		printf("\nEstá ordenado");
	}
	else printf("\nNo está ordenado");
	
	
	return 0;
}
