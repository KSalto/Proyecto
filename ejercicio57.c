#include<stdio.h>
#include<stdlib.h>
//..............................LISTAS GENÉRICAS INSERTAR EN UNA POSICION.....................
struct nodo {
	int info;
	struct nodo *sig;
};

struct nodo *raiz=NULL;

int vacia();
void insertar(int x, int pos);
void imprimir();
int extraer(int pos);
void liberar();
void intercambiar(int pos1, int pos2);
int mayor();
int posMayor();


int main(){
	
	insertar(10,1);
	insertar(4,2);
	insertar(5,3);
	imprimir();
	insertar(100,1);
	imprimir();
	insertar(40,2);	
	imprimir();
	intercambiar(2,5);
	imprimir();
	printf("\nEl mayor de la lista es: %i",mayor());
	printf("\nY se encuentra en la posicion: %i",posMayor());
	printf("\nLa informacion que se eliminara es: %i", extraer(4));
	liberar();
	return 0;
}

void insertar(int x, int pos){
	if (pos<=contarNodos()+1){
		struct nodo *nuevo;
		nuevo=malloc(sizeof(struct nodo));
		nuevo->info=x;
		
		if (pos==1){
			nuevo->sig=raiz;
			raiz=nuevo;
		}
		else if (pos==contarNodos()+1){
			struct nodo *rec=raiz;
			
			while (rec->sig!=NULL){
				rec=rec->sig;
			}
			rec->sig=nuevo;
			nuevo->sig=NULL;
		}
		else {
			struct nodo *rec=raiz;
			int i;
			for (i=1; i<=pos-2; i++){
				rec=rec->sig;
			}
			struct nodo *prox;
			
			prox=rec->sig;
			rec->sig=nuevo;
			nuevo->sig=prox;
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

int extraer(int pos){
	int informacion;
	if (pos<=contarNodos()){
		struct nodo *bor;
				
		if (pos==1){
			bor=raiz;
			informacion=bor->info;
			raiz=raiz->sig;
		}
		else{
			struct nodo *rec;
			struct nodo *prox;
			rec=raiz;
			int i;
			for (i=1; i<=pos-1;i++){
				rec=rec->sig;
			}
			bor=rec;
			prox=rec->sig;
			informacion=rec->info;
			rec=prox;						
		}
		free(bor);
		return informacion;
	}
	else{
		return -1;
	}
}

void intercambiar(int pos1, int pos2){
	if (pos1<=contarNodos() && pos2<=contarNodos()){
		struct nodo *rec1;
		struct nodo *rec2;
		rec1=raiz;
		rec2=raiz;
		int i;
		for (i=1;i<=pos1-1;i++){
			rec1=rec1->sig;
		}
		for (i=1;i<=pos2-1;i++){
			rec2=rec2->sig;
		}
		int aux;
		aux= rec1->info;
		rec1->info=rec2->info;
		rec2->info=aux;
		
	}
}

int mayor(){
	struct nodo *rec;
	int may;
	
	rec=raiz;
	may=rec->info;
	
	while (rec!=NULL){
		if (may<rec->info){
			may=rec->info;
		}
		rec=rec->sig;		
	}
	return may;
}

int posMayor(){
	struct nodo *rec;
	int i, may, pmay;
	
	rec=raiz;
	may=rec->info;
	i=1;
	pmay=i;
	
	while (rec!=NULL){
		if (may<rec->info){
			may=rec->info;
			pmay=i;
		}
		rec=rec->sig;
		i++;		
	}
	return pmay;
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
