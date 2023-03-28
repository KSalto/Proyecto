# include <stdio.h>
# include <math.h>

int main (){
	float cateto1, cateto2, hipotenusa;
	printf("\n Proporcione los valores de los catetos:");
	scanf("%f %f", &cateto1,&cateto2);
	
	hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
	printf("\n El valor de la hipotenusa es: %.2f", hipotenusa);
	return 0;
}
