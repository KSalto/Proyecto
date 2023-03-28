# include <stdio.h>

int main(){
	
	int valor1, valor2, operacion;
	char opcion;
	
	printf("Ingrese un valor: ");
	scanf("%i",&valor1);
	printf("Ingrese otro valor: ");
	scanf("%i",&valor2);

	printf("\nOperaciones a realizar: ");
	printf("\n1. Para suma ingrese: + ");
	printf("\n2. Para resta ingrese: - ");
	printf("\n3. Para multiplicacion ingrese: * ");
	printf("\n4. Para division ingrese: / ");
	
	printf("\nIngrese un caracter para realizar una operacion: ");
	scanf(" %c",&opcion); //al dejar un espacio entre la comilla y el %, me tomó bien la opcion, de lo contrario no me tomaba la opcion

	
	operacion=0;
		
	switch(opcion){
		case '+':
			operacion=valor1+valor2;
			break;
		case '-':
			operacion=valor1-valor2;
			break;
		case '*':
			operacion=valor1*valor2;
			break;
		case '/':
			operacion=valor1/valor2;
			break;
	}
	printf("\nEl resultado de la operacion %c es: %i",opcion,operacion);
	return 0;
}
