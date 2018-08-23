/*
*Progragrama: Imprimir en pantalla los numeros del 1 al 50
fecha:22 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//variables
	int contador=0;
	contador=1;
	while(contador<51){
		printf("\n%d",contador);
		contador=contador+1;
	};
	
	return 0;
}

