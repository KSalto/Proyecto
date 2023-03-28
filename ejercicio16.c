# include <stdio.h>

int main(){
	int n, suma, i;
	printf("Digite la cantidad de números a sumar: \n");
	scanf("%i",&n);
	i=1;
	while(i<=n){
		if (i%2==0) suma-=i;
		else suma+=i;
			
		i++;		
	}
	printf("\nLa suma es: %i",suma);
	return 0;
}
