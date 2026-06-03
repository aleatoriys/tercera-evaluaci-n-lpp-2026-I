/*Ejercicio 5: Realice un programa que permita calcular las raices de una
ecuacion cuadratica, valide cada caso posible, pero no el tipo de dato (una raiz,
dos raices, sin raices). Emplee sentencias de escape para la salida. */
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float valorA=0,valorB=0,valorC=0,discriminante=0,raizOriginal=0,PrimerResultadoSinDivision=0,SegundoResultadoSinDivision=0;
	float resultado1=0,resultado2=0;
	char repetir;
	do{
		cout << " ----- FUNCION CUADRATICA ----- " << endl;
		cout << "Ingrese el valor de A: " << endl;
		cin >> valorA;
		cout << "Ingrese el valor de B: " << endl;
		cin >> valorB;
		cout << "Ingrese el valor de C: " << endl;
		cin >> valorC;
		if((valorA <= 0) || (valorB <= 0) || (valorC <= 0)){
			cout << "El valor ingresado no puede ser igual o menor a 0." << endl;
			return 1;
		}
		cout << " ----- CALCULACION DE LA ECUACION CUADRATICA ----- " << endl;
		discriminante = valorB * valorB -((4 * valorA) * valorC);
		if (discriminante < 0){
			cout << "El valor del discriminante no pertenece al conjunto de los numeros reales" << endl;
			return 1;
		}
		cout << "El valor del discriminante fue: " << discriminante << endl;
		raizOriginal = sqrt(discriminante);
		cout << "El valor de la raiz del discriminante fue: " << raizOriginal << endl;
		PrimerResultadoSinDivision = -valorB + raizOriginal;
		cout << "El valor de la raiz positiva sin la division fue: " << PrimerResultadoSinDivision << endl;
		SegundoResultadoSinDivision = -valorB - raizOriginal;
		cout << "El valor de la raiz negativa sin la division fue: " << SegundoResultadoSinDivision << endl;
		resultado1 = PrimerResultadoSinDivision / (2 * valorA);
		cout << "El primer resultado fue: " << resultado1 << endl;
		resultado2 = SegundoResultadoSinDivision / (2 * valorA);
		cout << "El segundo resultado fue: " << resultado2 << endl;
		
	cout << "Desea repetir el programa? (s/n) " << endl;
	cin >> repetir;
	}while(repetir == 's' || repetir == 'S');
	return 0;
}