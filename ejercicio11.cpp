# include <stdio.h>
# include <string.h>

int main(){
	float precio, preciofinal;
	char marca[10];
	printf("Proporcione la marca de moto a comprar: ");
	gets(marca);
	printf("Proporcione el precio de la moto: ");
	scanf("%f",&precio);
	
	if (strcmp(marca,"Honda")==0){
		preciofinal=(precio)-(precio*5/100);
		printf("El precio final de la moto es: %.2f", preciofinal);
	}
	else if (strcmp(marca,"Yamaha")==0){
		preciofinal=(precio)-(precio*8/100);
		printf("El precio final de la moto es: %.2f", preciofinal);
	}
	else if (strcmp(marca,"Suzuki")==0){
		preciofinal=(precio)-(precio*10/100);
		printf("El precio final de la moto es: %.2f", preciofinal);
	}
	else {
		preciofinal=(precio)-(precio*2/100);
		printf("El precio final de la moto es: %.2f", preciofinal);
	}
	return 0;
}
