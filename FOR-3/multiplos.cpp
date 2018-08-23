/*
*Programa:escribir un programa que muestre por pantalla todos los numeros  multiplos de 4 que hay entre 64 y 4
*Fecha:21 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/

#include <iostream>
using namespace std;

//funcion principal
int main() {
	//variables
	int num;
	
	//ciclo para tomar multiplos de 4
	for(num = 64; num >= 4; num += -4)
	{
		printf("%d\n",num);
}
	return 0;
}

