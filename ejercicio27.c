# include <stdio.h>


int main() {
	int nrocta;
	float saldo,sumaAcreedor;
	
	sumaAcreedor=0;
	do{
		printf("Ingrese el nro de cuenta: ");
		scanf("%i",&nrocta);
		if (nrocta>=0){
			printf("Ingrese el saldo actual: ");
			scanf("%f",&saldo);
			
			if (saldo>0){
				printf("Saldo Acreedor");
				sumaAcreedor+=saldo;
			}
			else if (saldo==0){
				printf("Saldo Nulo");
			}
			else if (saldo<0){
				printf ("Saldo Deudor");
			}
			printf("\n");
		}
		
	}while(nrocta>=0);
	printf("Total de saldos Acreedores:");
    printf("%.2f",sumaAcreedor);
	return 0;
} 

