#include <stdio.h>

int main(){
	int n,i,factor=1;
	printf("Digite el numero que desea factoriar: \n");
	scanf("%i",&n);
	for(i=1; i<=n; i++){
		factor*=i;
	}
	
	printf("El factorial es: %i",factor);
	return 0;
}
