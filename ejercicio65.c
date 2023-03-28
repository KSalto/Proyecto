#include<stdio.h>
#include<stdlib.h>

int proximoMultiplo2();

int main(){
	int i;
	
	for (i=1; i<=10;i++){
		printf("El múltiplo de 2 es: %i\n", proximoMultiplo2());
	}
	
	return 0;
}

int proximoMultiplo2()
{
   static int multiplo;
   
   multiplo += 2;
   
   return multiplo;
}
