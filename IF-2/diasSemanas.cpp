
/*
*Programa:Escriba un programa que solicite al usuario un numero del 1 al 7 y diga el dia de la semana correspondiente
*Fecha:22 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//variables
	int i;
	printf("Introduzca un numero del 1 al 7:");
	scanf("%d",&i);
	
	switch(i){
		case 1:
			printf("Lunes\n");
		break;
		case 2:
			printf("Martes\n");
		break;
		case 3:
			printf("Miercoles\n");
		break;
		case 4:
			printf("Jueves\n");
		break;
		case 5:
			printf("Viernes\n");
		break;
		case 6:
			printf("Sabado\n");
		break;
		case 7:
			printf("Domingo\n");
		break;
	default:
		printf("opcion no valida\n");
		break;
	}
	return 0;
}

