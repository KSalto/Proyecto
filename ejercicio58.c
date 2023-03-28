#include<stdio.h>
#include<stdlib.h>
//.................................LISTAS GENÉRICAS ORDENADAS..................................
struct nodo {
	int info;
	struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertarOrdenada(int x);
void imprimir();

int main(){
	
	insertarOrdenada(10);
	insertarOrdenada(4);
	insertarOrdenada(5);
	insertarOrdenada(100);
	imprimir();
	liberar();
	return 0;
}

void insertarOrdenada(int x){
	struct nodo *nuevo;
	nuevo=malloc(sizeof(struct nodo));
	nuevo->info=x;
	nuevo->sig=NULL;
	
	if (raiz==NULL){
		raiz=nuevo;
	}
	else{
		
		if(x<raiz->info){
			nuevo->sig=raiz;
			raiz=nuevo;
		}
		else{
			struct nodo *rec=raiz;
			struct nodo *anterior=raiz;
			while(x>rec->info && rec->sig !=NULL){
				anterior=rec;
				rec=rec->sig;
			}
			if (x>rec->info){
				nuevo->sig=rec->sig;
				rec->sig=nuevo;
			}
			else{
				nuevo->sig=rec;
				anterior->sig=nuevo;
			}
						
			
		}
		
		
		
	}
	
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
