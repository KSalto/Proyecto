# include <stdio.h>

int main(){
	int n, num, i;
	printf("Digite la cantidad de n�meros para comprobar el m�ltiplo de 5: \n");
	scanf("%i",&n);
	i=1;
	while(i<=n){
		if (i%5==0) printf("Los m�ltiplos son: %i\n",i);
		i++;		
	}
	return 0;
}
