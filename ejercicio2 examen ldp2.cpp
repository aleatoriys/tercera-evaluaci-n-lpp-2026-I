/*Ejercicio 2: Desarrollar un programa en C++ que permita capturar 4 numeros de teclado y que
determine e imprima el mayor y el menor de ellos.*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int num1=0,num2=0,num3=0,num4=0,mayor=0,menor=0;
	char repetir;
	
	do{
		cout << "Ingrese el primer numero: " << endl;
		cin >> num1;
		cout << "Ingrese el segundo numero: " << endl;
		cin >> num2;
		cout << "Ingrese el tercer numero: " << endl;
		cin >> num3;
		cout << "Ingrese el cuarto numero: " << endl;
		cin >> num4;
		
		if(num1 > num2 && num1 > num3 && num1 > num4){
			mayor = num1;
			}
		else if(num1 < num2 && num1 < num3 && num1 < num4){
			menor = num1;	
		}
		if(num2 > num1 && num2 > num3 && num2 > num4){
			mayor = num2;
		}
		else if(num2 < num1 && num2 < num3 && num2 < num4){
			menor = num2;
		}
		if(num3 > num1 && num3 > num2 && num3 > num4){
			mayor = num3;
			}
		else if(num3 < num1 && num3 < num2 && num3 < num4){
			menor = num3;
			break;
		}
		if(num4 > num1 && num4 > num2 && num4 > num3){
			mayor = num4;
		}
		else if(num4 < num1 && num4 < num2 && num4 < num3){
			menor = num4;
		}
		cout << "El numero mayor fue " << mayor << endl;
		cout << "El numero menor fue " << menor << endl;
		cout << "Desea repetir el programa?: (s/n)" << endl;
		cin >> repetir;
	}while(repetir == 's' || repetir == 'S');
	return 0;
}