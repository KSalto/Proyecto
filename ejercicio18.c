# include <stdio.h>

int main(){
	int n,k,i,j;
	printf("Digite la cantidad de * que tendrá la base de su arbol de Navidad: \n");
	scanf("%i",&n);
	for(i=1; i<=n; i++){
		printf("\n\t");
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
