/*
 ============================================================================
 Name        : parcial1programacion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.
*/

float aplicarDescuento(int precio );

int main(void) {
	setbuf(stdout,NULL);
	float valor=200;

	printf("descuento aplicado es: %.2f",aplicarDescuento(valor));

	return EXIT_SUCCESS;
}
float aplicarDescuento(int precio ){
	float descuento;
	float precioFinal;

	descuento= (precio*5)/100;
	precioFinal= precio-descuento;

	return precioFinal;
}
