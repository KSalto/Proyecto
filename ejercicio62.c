#include<stdio.h>
#include<stdlib.h>
//..............................ARBOL BINARIO ORDENADO.....................
struct nodo {
	int info;
	struct nodo *izq;
	struct nodo *der;
};

struct nodo *raiz=NULL;

void insertar(int x);
void imprimirEntre(struct nodo *rec);
void imprimirPreOrden(struct nodo *rec);
void imprimirPostOrden(struct nodo *rec);
void liberar(struct nodo *rec);

int main(){
	
	insertar(10);
	insertar(4);
	insertar(5);
	insertar(100);
	insertar(3);
	printf("Imprimir entre orden\n");
	imprimirEntre(raiz);
	printf("\nImprimir pre orden\n");
	imprimirPreOrden(raiz);
	printf("\nImprimir post orden\n");
	imprimirPostOrden(raiz);
	
	liberar(raiz);
	
	return 0;
}

void insertar(int x){
	struct nodo *nuevo;
	nuevo=malloc(sizeof(struct nodo));
	nuevo->izq=NULL;
	nuevo->der=NULL;
	nuevo->info=x;
	
	if (raiz!=NULL){
		struct nodo *anterior, *rec=raiz;
		anterior=NULL;
		while (rec!=NULL){
			anterior=rec;
			if (x<rec->info) rec=rec->izq;
			else rec=rec->der;
		}
		if (x<anterior->info) anterior->izq=nuevo;
		else anterior->der=nuevo;
	
	}
	else {
		raiz=nuevo;
	}
}

void imprimirEntre(struct nodo *rec){
	if (rec!=NULL){
		imprimirEntre(rec->izq);
		printf("%i ",rec->info);
		imprimirEntre(rec->der);
	}
}

void imprimirPreOrden(struct nodo *rec){
	if (rec!=NULL){
		printf("%i ",rec->info);
		imprimirEntre(rec->izq);
		imprimirEntre(rec->der);
	}
}

void imprimirPostOrden(struct nodo *rec){
	if (rec!=NULL){
		imprimirEntre(rec->izq);
		imprimirEntre(rec->der);
		printf("%i ",rec->info);
	}
}

void liberar(struct nodo *rec){
	if (rec!=NULL){
		liberar(rec->der);
		liberar(rec->izq);
		free(rec);
	}
	
}
