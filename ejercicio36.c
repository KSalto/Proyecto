# include <stdio.h>

//void cargaVector(float);
//float calculaPromedio(float);
//void altaBaja(float,float,int);
void cargaVector(float vec[5]);
float calculaPromedio(float vec[5]);
void altaBaja (float vec[5],float prom, int vec2[2]);



int main(){
	float vector[5], promedio;
	int vector2[2];
	
	cargaVector(vector);
	promedio= calculaPromedio(vector);
	printf("\nEl promedio de altura es %.2f",promedio);
	altaBaja(vector,promedio,vector2);
	printf("\nLa cantidad que supera el promedio es %i y la cantidad que está por debajo del promedio es %i", vector2[1], vector2[2]);
	
	return 0;
}

void cargaVector(float vec[5]){
	int i;
	
	for (i=0; i<5 ; i++){
	
		printf("Ingrese la altura: ");
		scanf("%f",&vec[i]);
	}
}

float calculaPromedio(float vec[5]){
	int i;
	float suma,promedio;
	suma=0;
	
	for (i=0; i<5 ;i++){
		suma+=vec[i];
	}
	promedio=suma/5;
	return promedio;
	
}

void altaBaja (float vec[5],float prom, int vec2[2]){
	int i,alta=0, baja=0;
	
	for (i=0;i<5;i++){
		if (vec[i]>prom){
			alta++;
		}
		else if (vec[i]<prom){
			baja++;
		}
		
	}
	vec2[1]=alta;
	vec2[2]=baja;
} 


