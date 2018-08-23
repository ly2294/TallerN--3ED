/*
*Programa:escribir un programa que muestre por pantalla el area de 5 circulos solicitando al usuario su respectivos radios
*Fecha:21 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/

#include <iostream>
using namespace std;
//funcion principal

int main(int argc, char *argv[]) {
	// variables
	float area,radio;
	int i;
	
	//Realiza el calculo de 5 radios
	for(i=1; i<=5; i++){
		
		printf("\n Introduzca radio %d: ", i);
		scanf("%f", &radio);
		
		area = 3.1416 * radio * radio;
		
		printf("\n el area de la circunferencia %d es: %.2f \n\n", i , area);
	}
	
	
	return 0;
}

