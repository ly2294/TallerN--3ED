/*
*Programa:escriba un programa que solicite al usuario 3 numeros y determinar cual de ellos es mayor
*Fecha:22 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//variables
	int numero,mayor;
	printf("Ingrese el primer numero\n");
	scanf("%d",&mayor);
	printf("Ingrese el segundo numero\n");
	scanf("%d",&numero);
	if(numero>mayor)
		mayor=numero;
	printf("Ingrese el tercer numero\n");
	scanf("%d",&numero);
	if(numero>mayor)
		mayor=numero;
	printf("\n %d es el mayor.",mayor);
	
	return 0;
}

