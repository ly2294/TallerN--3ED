/*
*Progragrama: tabla de multiplicar usando Do-wHILE
fecha:21 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/

#include <iostream>
using namespace std;


//FUNCION
int main(int argc, char *argv[]) {
	
	//variables
	char c;
	int i,num;
	// inicia repita mientas 
	do{
		printf("Introduzca un numero entero: ");
		scanf("%d",&num);
		printf("\n la tabla de multiplicar del numero %d es:\n\n", num);
		
		//iniciamos tabla de multiplicar
		for(i = 0; i<= 10; i++);
		{
			printf("%d * %d = %d \n", i, num, i * num);
		}
		printf("\n desea visualizar otra tabla de multiplicar (s/n)?: ");
		fflush(stdin);
		scanf("%c", &c);
		printf("\n");
	} while(c != 'n');
	
	return 0;
}

