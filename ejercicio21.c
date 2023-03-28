#include <stdio.h>

int main(){
	int n,i,suma=0, cant=0;
	printf("Digite hasta que numero desea sumar los pares: \n");
	scanf("%i",&n);
	for(i=1; i<=n; i++){
		if(i%2==0) {
		cant++;
		suma+=i;
	}
	}
	
	printf("La suma de los %i numeros pares es: %i",cant, suma);
	return 0;
}
