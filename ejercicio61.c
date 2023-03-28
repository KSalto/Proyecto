#include<stdio.h>
#include<stdlib.h>
//..............................LISTAS GENÉRICAS CIRCULARES DOBLEMENTE ENCADENADA INSERTAR EN UNA POSICION.....................
struct nodo {
	int info;
	struct nodo *ant;
	struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar(int x, int pos);
void imprimir();
int extraer(int pos);
void liberar();

int main(){
	
	insertar(10,1);
	insertar(4,2);
	insertar(5,3);
	imprimir();
	insertar(100,1);
	imprimir();
	insertar(40,2);	
	imprimir();
	printf("\nLa informacion que se eliminara es: %i", extraer(4));
	imprimir();

	return 0;
}

void insertar(int x, int pos){
	if (pos<=contarNodos()+1){
		struct nodo *nuevo;
		nuevo=malloc(sizeof(struct nodo));
		nuevo->info=x;
		nuevo->ant=NULL;
		nuevo->sig=NULL;
		
		if (pos==1){
			if (raiz==NULL) {
				nuevo->sig = nuevo;
        		nuevo->ant = nuevo;
        		raiz = nuevo;
			}
			else{
				struct nodo *ultimo=raiz->ant;
				nuevo->sig=raiz;
				nuevo->ant=ultimo;
				raiz->ant=nuevo;
				ultimo->sig=nuevo;
				raiz=nuevo;
			}

		}
		else if (pos==contarNodos()+1){
			struct nodo *rec=raiz;
			struct nodo *ultimo=raiz->ant;
			
			nuevo->sig=raiz;			
			nuevo->ant=ultimo;
			ultimo->sig=nuevo;
			raiz->ant=nuevo;

		}
		else {
			struct nodo *rec=raiz;
			int i;
			for (i=1; i<=pos-2; i++){
				rec=rec->sig;
			}
			struct nodo *prox=rec->sig;
			
			rec->sig=nuevo;
			nuevo->sig=prox;
			nuevo->ant=rec;
			prox->ant=nuevo;
		}
	}
}

void imprimir(){
	
	struct nodo *rec;
	rec=raiz;
	
	printf("\nLista completa");
	
	do {
		printf("\n%i ",rec->info);
		rec=rec->sig;
	}while (rec!=raiz);
}

int contarNodos(){
	int contar=0;
	if (raiz!=NULL){
		struct nodo *rec;
		rec=raiz;
		
		do {
			contar++;
			rec=rec->sig;
		}while (rec!=raiz);
	}

	
	return contar;
}

int extraer(int pos){
	int informacion;
	if (pos<=contarNodos()){
		struct nodo *bor;
				
		if (pos==1){
			bor=raiz;
			informacion=bor->info;
			struct nodo *ultimo=bor->ant;
			
			if (raiz->sig!=raiz){
				raiz=raiz->sig;
				if(raiz->sig!=bor){
					raiz->ant=ultimo;
					ultimo->sig=raiz;
				}
				else {
					raiz->sig=raiz;
					raiz->ant=raiz;
				}
			}
			
			 
		}
		else{
			struct nodo *rec=raiz;
		
			int i;
			for (i=1; i<=pos-1;i++){
				rec=rec->sig;
			}
			struct nodo *prox=rec->sig;

			bor=rec;
			informacion=rec->info;
			struct nodo *anterior=rec->ant;
			if (prox!=raiz){
				//anterior->ant=prox;
				anterior->sig=prox;
				prox->ant=anterior;
				//prox->sig=raiz;
			}
			else{
				anterior->sig=prox;
				raiz->ant=anterior;
			}
									
		}
		free(bor);
		return informacion;
	}
	else{
		return -1;
	}
}
