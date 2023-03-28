# include <stdio.h>
int suma(int,int);

int main(){
	int num1, num2, total;
	printf("ingrese un número:");
	scanf("%i",&num1);
	printf("ingrese otro numero:");
	scanf("%i",&num2);
	total=suma(num1,num2);
	printf("La suma de los dos numeros es: %i",total);
	return 0;
}

int suma(int n1,int n2){
	int s;
	s= n1+n2;
	return s;
}
