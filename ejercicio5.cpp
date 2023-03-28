# include <stdio.h>

int main(){
	float Base1,Base2,h,area;
	printf("Proporcione las dos bases y la altura:");
	scanf("%f %f %f", &Base1, &Base2, &h);
	
	area= (Base1+Base2)*h/2;
	printf("El area del trapecio es: %.2f", area);
	return 0;
}
