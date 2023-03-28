# include <stdio.h>

int main(){
	int n,i,cont=0;
	printf("Digite el numero que desea averiguar si es primo: \n");
	scanf("%i",&n);
	for(i=1; i<=n; i++){
		if (n%i==0) cont++;
	}
	if (cont>2) printf("El número es compuesto");
	else if (cont==2) printf("El número es primo");
	else printf("No es ni primo ni compuesto");
	return 0;
}
