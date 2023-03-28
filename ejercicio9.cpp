# include <stdio.h>
# include <math.h>

int main(){
	int num1, raiz;
	printf("Proporcione un número: ");
	scanf("%i",&num1);
	if (num1>0){
		raiz= sqrt(num1);
		printf("Su raiz es: %i", raiz);
	}
	else {
		printf("Tiene raiz imaginaria");
	}
	return 0;
}
