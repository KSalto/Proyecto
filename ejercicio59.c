#include<stdio.h>
#include<stdlib.h>
#include <string.h>
//....................................EJERCICIO DE APLICACION DE LISTAS GENERICAS ORDENADAS
struct nodo {
	char usuario[51];
	struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertarOrdenada(char us[51]);
void imprimir();

int main(){
	
	insertarOrdenada("karina");
	insertarOrdenada("sonia");
	insertarOrdenada("maria");
	insertarOrdenada("teresa");
	imprimir();
	liberar();
	return 0;
}

void insertarOrdenada(char us[51]){
	struct nodo *nuevo;
	nuevo=malloc(sizeof(struct nodo));
	strcpy(nuevo->usuario,us);
	nuevo->sig=NULL;
	
	if (raiz==NULL){
		raiz=nuevo;
	}
	else{
		
		if(strcmp(us,raiz->usuario)<0){
			nuevo->sig=raiz;
			raiz=nuevo;
		}
		else{
			struct nodo *rec=raiz;
			struct nodo *anterior=raiz;
			while(strcmp(us,rec->usuario)>0 && rec->sig !=NULL){
				anterior=rec;
				rec=rec->sig;
			}
			if (strcmp(us,rec->usuario)>0){
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
		printf("\n%s ",rec->usuario);
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
