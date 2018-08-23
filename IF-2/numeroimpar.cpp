/*
*Programa:escriba un programa que solicite al usuario un numero y determinar si es par o impar
*Fecha:22 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//variables
	
	int numero;
	printf("Ingresar un numero \n");
	scanf("%d",&numero);
	
	if( numero % 2 == 0)
		printf("\n es par");
	else
		printf("\n es impar");
	
	return 0;
}

