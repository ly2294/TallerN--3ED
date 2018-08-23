/*
*Programa:escriba un programa que solicite al usuario 3 numeros y determinar cual de ellos es menos
*Fecha:22 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//varibles
	
	int numero,menor;
	printf("Ingrese el primer numero\n");
	scanf("%d",&menor);
	printf("Ingrese el segundo numero\n");
	scanf("%d",&numero);
	if(numero<menor)
		numero=numero;
	printf("Ingrese el tercer numero\n");
	scanf("%d",&numero);
	if(numero<menor)
		numero=numero;
	printf("\n %d es el menor.",menor);
	return 0;
}

