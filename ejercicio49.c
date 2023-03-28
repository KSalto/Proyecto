# include <stdio.h>
# include <string.h>
# define TAMANO 2

struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};


void cargar(struct libro vec[TAMANO]){
	
	int i;
	
	for (i=0; i<TAMANO;i++){
		
		printf("Ingrese el codigo:");
		scanf("%i",&vec[i].codigo);
		fflush(stdin);
		printf("Ingrese titulo del libro:");
		gets(vec[i].titulo);
		printf("Ingrese autor del libro:");
		gets(vec[i].autor);
		
	}
}

void imprimir(struct libro vec[TAMANO]){
	
	int i;
	
	for (i=0;i<TAMANO;i++){
		printf("%i - %s - %s\n",vec[i].codigo,vec[i].titulo,vec[i].autor);
	}
}

void buscarPorAutor(struct libro vec[TAMANO]){
	
	int i,encuentra=0;
	char autor[40];
	
	printf("Ingrese un autor de libro: ");
	gets(autor);
	for (i=0;i<TAMANO;i++){
		if (strcmp(autor,vec[i].autor)==0){
			printf("%s",vec[i].titulo);
			encuentra++;
		}
	}
	if (encuentra==0){
		printf("Ese autor no se encuentra en el listado");
	}
}

int main(){
	
	struct libro vector[TAMANO];
	
	cargar(vector);
	printf("\nLISTADO DE LIBROS\n");
	imprimir(vector);
	printf("\nBUSQUEDA DE LIBROS POR AUTOR\n");
	buscarPorAutor(vector);

	return 0;
}
