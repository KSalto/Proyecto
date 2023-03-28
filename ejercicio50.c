# include <stdio.h>
# define TAMANO 5
void cargarVector(int vec[TAMANO]);
void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor);

int main(){
	
	int vector[TAMANO],mayor,menor;
	
	cargarVector(vector);
	mayor=vector[0];
	menor=vector[0];
	mayorMenor(vector,&mayor,&menor);
	printf("El mayor es:%i y el menor es:%i",mayor,menor);
	return 0;
}

void cargarVector(int vec[TAMANO]){
	int i;
	
	for(i=0;i<5;i++){
		printf("Ingrese un número entero: ");
		scanf("%i",&vec[i]);
	}
}

void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor){
	int i;
	
	for(i=1;i<TAMANO;i++){
		if (vec[i]>*pmayor){
			*pmayor=vec[i];
		}
		else if (vec[i]<*pmenor){
			//*pmenor=*pmayor;
			*pmenor=vec[i];
			
		}
	}
}
