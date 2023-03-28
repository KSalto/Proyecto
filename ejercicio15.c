# include <stdio.h>

int main(){
	int n, num, i;
	printf("Digite la cantidad de números para comprobar el múltiplo de 5: \n");
	scanf("%i",&n);
	i=1;
	while(i<=n){
		if (i%5==0) printf("Los múltiplos son: %i\n",i);
		i++;		
	}
	return 0;
}
