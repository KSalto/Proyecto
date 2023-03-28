# include <stdio.h>

struct pais{
	char nombre[40];
	int cantidadhab;
};

void imprimir(struct pais p);

int main(){

	struct pais pais1={"Argentina",4000};
	struct pais pais2={"Brasil",5000};
	struct pais pais3={"Peru",3000};
	imprimir(pais1);
	imprimir(pais2);
	imprimir(pais3);
	
	return 0;
}

void imprimir(struct pais p){
	
	printf("El nombre del país es: %s y tiene %i habitantes\n",p.nombre, p.cantidadhab);
}

