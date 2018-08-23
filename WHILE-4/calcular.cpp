/*
*Progragrama: calcular la mitad de un numero siempre y cuando el numero ingresado sea distinto a 0 y 1
fecha:21 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//variables
	float num;
	printf("Introduzca un numero real \n");
	scanf("%f", &num);
	
	while(num !=0 && num!=1){
		printf("la mitad de %.2f es: %.2f",num,num /2);
		printf(" introduzaca otro numero real :");
		scanf("%ff",&num);
	}
	
	return 0;
}

