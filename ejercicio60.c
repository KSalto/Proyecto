#include<stdio.h>
#include<stdlib.h>
//..............................LISTAS GENÉRICAS DOBLEMENTE ENCADENADA INSERTAR EN UNA POSICION.....................
struct nodo {
	int info;
	struct nodo *ant;
	struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar(int x, int pos);
void imprimir();
void imprimirInverso();
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
	imprimirInverso();
	printf("\nLa informacion que se eliminara es: %i", extraer(3));
	imprimir();
	liberar();
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
			nuevo->sig=raiz;
			if (raiz!=NULL) raiz->ant=nuevo;
			raiz=nuevo;
		}
		else if (pos==contarNodos()+1){
			struct nodo *rec=raiz;
			
			while (rec->sig!=NULL){
				rec=rec->sig;
			}
			rec->sig=nuevo;
			nuevo->ant=rec;
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

int contarNodos(){
	struct nodo *rec;
	int contar=0;
	
	rec=raiz;
		
	while (rec!=NULL){
		contar++;
		rec=rec->sig;
	}
	
	return contar;
}

void imprimir(){
	
	struct nodo *rec;
	rec=raiz;
	
	printf("\nLista completa");
	while (rec!=NULL){
		printf("\n%i ",rec->info);
		rec=rec->sig;
	}
}

void imprimirInverso(){
		
	struct nodo *rec;
	rec=raiz;
	while (rec->sig!=NULL){
		rec=rec->sig;
	}
	printf("\nLista completa Inversa");
	while (rec!=NULL){
		printf("\n%i ",rec->info);
		rec=rec->ant;
	}
			
}

int extraer(int pos){
	int informacion;
	if (pos<=contarNodos()){
		struct nodo *bor;
				
		if (pos==1){
			bor=raiz;
			informacion=bor->info;
			raiz=raiz->sig;
			if (raiz!=NULL) raiz->ant=NULL;
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
			
			anterior->sig=prox;
			if (prox!=NULL) prox->ant=anterior;
									
		}
		free(bor);
		return informacion;
	}
	else{
		return -1;
	}
}


void liberar()
{
    struct nodo *rec = raiz;
    struct nodo *bor;
    while (rec != NULL)
    {
        bor = rec;
        rec = rec->sig;
        free(bor);
    }
}
