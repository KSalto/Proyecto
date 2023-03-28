# include <stdio.h>

int main(){
	int horas;
	float valor, salario;
	printf("Proporcione la cantidad de horas trabajadas: ");
	scanf("%i", &horas);
	printf("Proporcione el valor de cada hora:");
	scanf("%f",&valor);
	
	salario=horas * valor;
	printf("Su salario es de: %.2f",salario);
	return 0;
}
