/*
*Programa:Escribe un programa que muestre por pantalla todos los numeros pares que hay entre 1 y el 1000
*Fecha:22 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//variables
	int i,sum=0;
	for(i=0;i<=1000;i=i+2){
		printf(" %d ",i);
		sum = sum +i;
	}
	printf("%d ",sum);
	
	return 0;
}

