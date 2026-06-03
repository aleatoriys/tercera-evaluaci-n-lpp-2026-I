/*desarrollar un programa en c que permita leer el numero entero positivo de teclado y dependiendo del valor 
capturado despliegue en pantalla el dia de la semana al que le corresponderia dicho numero, es decir si esta en
el rango del 1 al 7, el 1 corresponderia al dia domingo, el 2 al lunes etcetera. Emplee sentencias de escape para la salida*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
char repetir;	
int dia;
do{

 cout<<"------------ Bienvenido al convertidor de numeros a dias----------"<<endl;
 cout<<endl;
 cout<<"por favor ingrese un numero del 1 al 7"<<endl;
 cin>> dia;
 
switch (dia){
	
	case 1:
		cout<<"el numero 1 corresponde al dia domingo"<<endl;
		break;
	case 2:
		cout<<"el numero 2 corresponde al dia lunes"<<endl;
		break;
	case 3:
		cout<<"el numero 3 corresponde al dia martes"<<endl;
		break;
	case 4:
	    cout<<"el numero 4 corresponde al dia miercoles"<<endl;
		break;
	case 5:
		cout<<"el numero 5 corresponde al dia jueves"<<endl;
		break;
	case 6:
		cout<<"el numero 6 corresponde aal dia viernes"<<endl;
		break;
	case 7:
		cout<<"el numero 7 corresponde al dia sabado"<<endl;
		break;
	default:
		cout<<"el numero que usted marco no se encuentra dentro del rango numerico"<<endl;
		break;


}

    cout<<"desea repetir la ejecucion? s/n"<<endl;
    cin>> repetir;
}while (repetir=='s'|| repetir=='S');
		
	cout<<"gracias por participar"<<endl;
	cout<<"----------------------"<<endl;
	cout<<endl;
	cout<<"------adios------"<<endl;
	cout<<"preciones cualquier tecla para salir del buclee"<<endl;
    getch();
    
    return 0;
	}
