# include <stdio.h>
# include <string.h>

int main(){
	int nota;
	printf("Proporcione la nota del Examen: ");
	scanf("%i",&nota);
	
	switch(nota){

	case 10:
		puts ("Tu valoraci�n es: Excelente");
		break;
	case 9:
		puts ("Tu valoraci�n es: Muy Bueno");
		break;
	case 8:
		puts ("Tu valoraci�n es: Muy Bueno");
		break;
	case 7:
		puts ("Tu valoraci�n es: Bueno");
		break;
	case 6:
		puts ("Tu valoraci�n es: Bueno");
		break;
	case 5:
		puts ("Tu valoraci�n es: En proceso");
		break;
	case 4:
		puts ("Tu valoraci�n es: En proceso");
		break;
	case 3:
		puts ("Tu valoraci�n es: Insuficiente");
		break;
	case 2:
		puts ("Tu valoraci�n es: Insuficiente");
		break;
	case 1:
		puts ("Tu valoraci�n es: Insuficiente");
		break;
	default: printf("No es una nota correcta");
	}
	return 0;
}
