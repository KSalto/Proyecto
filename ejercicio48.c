# include <stdio.h>

struct punto {
	int x;
	int y;
};

struct punto cargarPunto();
void imprimirPunto(struct punto p);

int main() 
{
	struct punto p1;
	struct punto p2;
	struct punto p3;
		
	printf("Primer punto\n");
	p1=cargarPunto();
	imprimirPunto(p1);
	printf("\nSegunto punto\n");
	p2=cargarPunto();
	imprimirPunto(p2);
	printf("\nTercer punto\n");
	p3=cargarPunto();
	imprimirPunto(p3);
	
	
	return 0;
}

struct punto cargarPunto(){
	
	struct punto p;
	
	printf("\nDigite x: ");
	scanf("%i",&p.x);
	printf("\nDigite y: ");
	scanf("%i",&p.y);
	
	return p;
}

void imprimirPunto(struct punto p){
	if (p.x>0 && p.y>0){
		printf("El punto se encuentra en el primer cuadrante %i,%i ",p.x, p.y);
	}
	else if (p.x<0 && p.y>0){
		printf("El punto se encuentra en el segundo cuadrante %i,%i ",p.x, p.y);
	}
	else if (p.x<0 && p.y<0){
		printf("El punto se encuentra en el tercer cuadrante %i,%i ",p.x, p.y);
	}
	else if (p.x>0 && p.y<0){
		printf("El punto se encuentra en el cuarto cuadrante %i,%i ",p.x, p.y);
	}
}
