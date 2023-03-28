#include<stdio.h>
#include<stdlib.h>
//........................................LISTAS TIPO COLA...................................................
struct nodo {
	int info;
	struct nodo *sig;
};

struct nodo *raiz=NULL;
struct nodo *fondo=NULL;

int vacia();
void insertar(int x);
void imprimir();
int extraer();
void liberar();

int main(){
	
	insertar(10);
	insertar(4);
	insertar(5);
	imprimir();
	printf("\nSe extrae la informacion de la pila: %i\n",extraer());
	imprimir();
	
	return 0;
}

void insertar(int x){
	struct nodo *nuevo;
	nuevo=malloc(sizeof(struct nodo));
	
	nuevo->info=x;
	nuevo->sig=NULL;
	if (vacia()){
		raiz=nuevo;
		fondo=nuevo;
	}
	else {
		fondo->sig=nuevo;  //enlazo el nuevo nodo a la lista
		fondo=nuevo;       //el puntero fondo tiene que quedar apuntando el final (o sea el nuevo nodo)
	}
}

int vacia(){
	if (raiz==NULL){
		return 1;
	}
	else {
		return 0;
	}
}

void imprimir(){
	struct nodo *rec;
	
	rec=raiz;
	
	if (vacia()){
		printf("La lista está vacia");
	}
	else{
		printf("La lista completa\n");
		while (rec!=NULL){
			printf("%i\n",rec->info);
			rec=rec->sig;
		}
	}
}

int extraer(){
	struct nodo *bor;
	int informacion;
	
	bor=raiz;
	informacion=raiz->info;
	
	if (vacia()){
		return -1;	
	}
	else {
		if (raiz==fondo){
			raiz=NULL;
			fondo=NULL;
		}
		else {
			raiz=raiz->sig;
		}
		free(bor);
		return informacion;
	}	
	
}
void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}
