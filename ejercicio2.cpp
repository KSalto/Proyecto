# include <stdio.h>

int main(){
	int temC;
	float temF;
	printf("\n Proporcione una temperatura en grados centígrados: ");
	scanf ("%i", &temC);
	
	temF= temC*1.8 + 32;

	printf("\n La temperatura en grados Farengeis es: %.2f", temF);
	return 0;
}
