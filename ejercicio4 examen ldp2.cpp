/* Ejercicio 4: Dado 3 numeros que representan los lados de un triangulo, determine de
que tipo es. Emplee sentencias de escape para la salida.*/
#include<iostream>
using namespace std;
int main()
{
	float lado1,lado2,lado3;
	char repetir;
	do{
		cout << "Ingrese el valor del primer lado: " << endl;
		cin >> lado1;
		cout << "Ingrese el valor del segundo lado: " << endl;
		cin >> lado2;
		cout << "Ingrese el valor del tercer lado: " << endl;
		cin >> lado3;
		
		if(lado1 == lado2 && lado1 == lado3){
			cout << "Es un triangulo Equilatero ( los 3 lados son iguales )." << endl;
		}
		else if((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado2 != lado1) || (lado3 == lado1 && lado3 != lado2)){
			cout << "Es un triangulo de Isosceles ( 2 lados son iguales )." << endl;
			}
		else{
			cout << "Es un triangulo Escaleno ( los 3 lados son diferentes )." << endl;
			}
			cout << "Desea repetir el programa?: (s/n)" << endl;
			cin >> repetir;
	}while(repetir == 's' || repetir == 'S');
	return 0;
}