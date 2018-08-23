/*
*Programa:escriba un programa que Calcule el area de un triangulo
*Fecha:16 de agosto del 2018
*Elaborado por:Leidy Yuliana Quintero Jaramillo
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//variables
	float altura, area, base;
	
	printf( "Introduzca base\n");
	scanf( "%f", &base );
	printf( "Introduzca altura\n");
	scanf( "%f", &altura );
	
	area = base * altura / 2;
	
	printf( "El area del triangulo es:=%.0f", area );
	
	return 0;
}

