# include <stdio.h>

int main(){
	float num1,num2,num3, media;
	printf("Proporcione 3 números cualquiera:");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	media= (num1+num2+num3)/3;
	printf("La media es: %.2f", media);
	return 0;
}
