/*Desarrollar un programa en c que permita capturar 3 numero enteros positivos y que determine 
e imprima si los numeros fueron capturados en orden creciente o no*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
char repetir;	
int numero1, numero2, numero3;
do{
cout<<"ingrese un numero entero positivo"<<endl;
cin>> numero1;
cout<<"ingrese otro entero positivo"<<endl;
cin>> numero2;
cout<<"ingrese otro entero positivo"<<endl;
cin>> numero3;



if (numero1 <= 0 || numero2 <= 0 || numero3 <= 0){
	cout<<"ERROR ingrese un numero entero positivo"<<endl;
}


else if (numero1 < numero2 && numero2 < numero3){
    cout<<"El orden de los numeros fueron capturados en orden creciente." <<endl;
		
} 

else {
	cout<<"--- ERROR,los numeros dentro de la captura son iguales---"<<endl;
}
	cout<<"desea repetir la oprecion? s/n"<<endl;
	cin>>repetir;
	
}while (repetir == 's' || repetir == 'S');



 cout<<"-------- Gracias por participar. Adios ----------"<<endl;
 
 return 0;	
		
}
