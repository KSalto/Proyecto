# include <stdio.h>
# include <stdlib.h.>
//...........................................LISTA TIPO PILA.....................................................
struct nodo {
	int info;
	struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar(int x);
void imprimir();
int extraer();
void liberar();
int contarNodos();
void ultimoNodo(int cuenta);

int main(){
	if (raiz==NULL){
		printf("La lista esta vacia\n");
	}
	else{
		imprimir();
	}
	insertar(10);
	insertar(4);
	insertar(5);
	imprimir();
	ultimoNodo(contarNodos());
	printf("\nSe ha extraido el elemento %i\n",extraer());
	imprimir();
	ultimoNodo(contarNodos());
	liberar();

	
	return 0;
}

void insertar(int x){
	
	struct nodo *nuevo;                   // Creación
	nuevo=malloc(sizeof(struct nodo));    // del nodo
	
	nuevo->info=x;
	if (raiz==NULL){                      //Si la raiz no tiene nada
		raiz=nuevo;                       // raiz tiene que apuntar al nuevo nodo
		nuevo->sig=NULL;                  // el campo siguiente (que es un puntero) tiene que apuntar a NULO
	}
	else{                                //Si la raiz tiene algo
		nuevo->sig=raiz;                 // el campo siguiente (que es un puntero) tiene que apuntar a la lista, donde está raiz. Para que quede enlazada 
		raiz=nuevo;                      // raiz tiene que apuntar al nuevo nodo
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

int extraer(){
	int informacion;
	struct nodo *bor;
	
	bor=raiz;
	
	
	if (raiz != NULL) {
		informacion=raiz->info;
		raiz=raiz->sig;
		free(bor);
	}
	else {
		informacion=-1;
	}
	
	return informacion;
}

void liberar(){
	struct nodo *rec;
	struct nodo *bor;
	
	rec=raiz;
	
	while (rec!=NULL){
		bor=rec;
		rec=rec->sig;
		free(bor);
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

void ultimoNodo(int cuenta){
	struct nodo *rec;
	int i;
	
	rec=raiz;
	
	for(i=0;i<cuenta-1;i++){
		rec=rec->sig;
	} 
	printf("\nEl ultimo nodo de la lista es: %i\n",rec->info);
}
