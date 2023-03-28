# include <stdio.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};
void cargar(struct pais *ppuntero);
void imprimir(struct pais p);

int main(){
	struct pais pais1, pais2, pais3;
		
	cargar(&pais1);
	cargar(&pais2);
	cargar(&pais3);
	imprimir(pais1);
	imprimir(pais2);
	imprimir(pais3);
	
	return 0;
}

void cargar(struct pais *ppuntero){
	printf("Ingrese el nombre del pais: ");
	gets(ppuntero->nombre);
	printf("Ingrese la cantidad de habitantes: ");
	scanf("%i",&ppuntero->cantidadhab);
	fflush(stdin);
}

void imprimir(struct pais p){
	
	printf("\nPais: %s - Cant. habitantes: %i",p.nombre,p.cantidadhab);
	
}
