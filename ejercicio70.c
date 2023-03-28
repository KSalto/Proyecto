#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void cargar();
void imprimirCantVocales();
void imprimirCantLineas();

int main(){
//    cargar();
	imprimirCantVocales();
	imprimirCantLineas();
}

void cargar(){
	FILE *arch=fopen("datos1.txt","wt");
    if (arch==NULL) exit(1);
    fputs("Primera linea\n",arch);
    fputs("Segunda linea\n",arch);
    fputs("Tercer linea\n",arch);
    fclose(arch);
    printf("Se creo el archivo de texto con tres lineas de texto.");
    getch();
    
}

void imprimirCantVocales(){
	FILE *arch=fopen("datos1.txt","rt");
    if (arch==NULL) exit(1);
    char caracter;
    int cuenta=0;
    
    caracter=fgetc(arch);
    while(!feof(arch)){
    	if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u') cuenta++;
    	caracter=fgetc(arch);
    }
    fclose(arch);
    printf("La cantidad de vocales del archivo es:%i\n",cuenta);
}

void imprimirCantLineas(){
	FILE *arch=fopen("datos1.txt","rt");
    if (arch==NULL) exit(1);
    char caracter;
    int cuenta=0;
    
    caracter=fgetc(arch);
    while(!feof(arch)){
    	if(caracter=='\n') cuenta++;
    	caracter=fgetc(arch);
    }
    fclose(arch);
    printf("La cantidad de lineas del archivo es:%i\n",cuenta);
}
