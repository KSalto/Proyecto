# include <stdio.h>

int main(){
	int n, num, i;
	printf("Digite un n�mero: \n");
	scanf("%i",&n);
	i=1;
	while(i<=n){
		num=i*3;
		printf("Los m�ltiplos son: %i\n",num);
		i++;		
	}
	return 0;
}
