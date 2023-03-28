# include <stdio.h>
void cargaSueldo(float vecsuel[4]);
float imprimeGastos(float vectorsuel[4]);

int main(){
	float vectorsueldoTM[4], vectorsueldoTT[4];
	float gastosTM, gastosTT;
	
	
	cargaSueldo(vectorsueldoTM);
	gastosTM=imprimeGastos(vectorsueldoTM);
	printf("\nLos gastos en sueldo del Turno Mañana son: %f\n",gastosTM);
	
	cargaSueldo(vectorsueldoTT);
	gastosTT=imprimeGastos(vectorsueldoTT);
	printf("\nLos gastos en sueldo del Turno Tarde son: %f\n",gastosTT);
	
	return 0;
}

void cargaSueldo(float vecsuel[4]){
	int i;
	
	for (i=0; i<4; i++){
		printf("Ingrese sueldo del empleado: ");
		scanf("%f",&vecsuel[i]);
	}
	
}

float imprimeGastos(float vectorsuel[4]){
	int i;
	float gastos=0;
	
	for (i=0; i<4;i++){
		gastos+=vectorsuel[i];
	}
	
	return gastos;
}
