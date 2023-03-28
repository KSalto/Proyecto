# include <stdio.h>
# define FILAS 4
# define COLUMNAS 3

void cargaEmpleadosSueldos(char matempl[FILAS][21], float matsuel[FILAS][COLUMNAS]);
void generarVectorSueldosAcumulados(float matsuel[FILAS][COLUMNAS],float vector[FILAS]);
void mostrarSueldosAcumulados(char matempl[FILAS][21], float vec[FILAS]);
void mayorSueldoAcumulado(char matempl[FILAS][21], float vec[FILAS]);

int main(){
	char matempleados[FILAS][21];
	float matsueldos[FILAS][COLUMNAS];
	float vector[FILAS];
	
	cargaEmpleadosSueldos(matempleados, matsueldos);
	generarVectorSueldosAcumulados(matsueldos,vector);
	printf("Empleado - Sueldo Acumulado\n");
	mostrarSueldosAcumulados(matempleados,vector);
	mayorSueldoAcumulado(matempleados,vector);
	
	return 0;
}

void cargaEmpleadosSueldos(char matempl[FILAS][21], float matsuel[FILAS][COLUMNAS]){
	int i,j;
	
	for (i=0;i<FILAS;i++){
		printf("Ingrese el nombre del empleado: ");
		gets(matempl[i]);
		for (j=0;j<COLUMNAS;j++){
			printf("Ingrese el sueldo del empleado: ");
			scanf("%f",&matsuel[i][j]);
		}
		fflush(stdin);
	}
			
}

void generarVectorSueldosAcumulados(float matsuel[FILAS][COLUMNAS],float vector[FILAS]){
	int i,j;
	
	for (i=0;i<FILAS;i++){
		for (j=0;j<COLUMNAS;j++){
			vector[i]+=matsuel[i][j];
		}
	}
	
}

void mostrarSueldosAcumulados(char matempl[FILAS][21], float vec[FILAS]){
	int i,j;
	
	for (i=0;i<FILAS;i++){
		printf("\n %s - %f",matempl[i],vec[i]);
	}
}

void mayorSueldoAcumulado(char matempl[FILAS][21], float vec[FILAS]){
	int i,pos,suma=0;
	float aux=0;
	
	aux=vec[0];
	pos=0;
	for (i=1;i<FILAS;i++){
		if(aux>vec[i]){
			suma++;
			pos=i;
		}
		else {
			suma++;
			pos=i;
		}
	}
	if (suma>0){
		printf("\nEl empleado con mayor sueldo acumulado es %s con un total de:%f",matempl[pos],vec[pos]);
	}
}
