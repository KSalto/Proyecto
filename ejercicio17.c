# include <stdio.h>

int main(){
	int i,suma=0;
	
	for(i=1; i<=10; i++){
		if(i%2==0) suma+=i;
	}
	printf("La suma de los 10 primeros numeros pares es: %i\n",suma);
	return 0;
}
