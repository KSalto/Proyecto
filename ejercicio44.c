# include <stdio.h>
# include <string.h>
void cargarProductoPrecio(char mat[5][21],float vec[5]);
int buscarCuantosMayores(float vec[5]);


int main(){
	
	char matriz[5][21];
	float vector[5];
	
	cargarProductoPrecio(matriz,vector);
	printf("La cantidad de productos mayores al primero es:%i",buscarCuantosMayores(vector));
	
	return 0;
}

void cargarProductoPrecio(char mat[5][21], float vec[5]){
	
	int f;
	for (f=0;f<5;f++){
		printf ("Ingrese el nombre del producto: ");
		gets(mat[f]);
		printf("Ingrese el precio del producto: ");
		scanf("%f",&vec[f]);
		fflush(stdin);
	}
	
}

int buscarCuantosMayores(float vec[5]){
	
	int f, suma=0;
	float aux;
	
	aux=vec[0];
	for (f=1;f<5;f++){
		if (aux<vec[f]){
			suma++;
		}
	}
	
	return suma;
}
