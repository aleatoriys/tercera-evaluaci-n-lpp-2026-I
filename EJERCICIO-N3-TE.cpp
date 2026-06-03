/*Ejercicio 3: Escriba, compile y ejecuta un programa que genere la serie
fibonacci hasta un numero limite fijado por el usuario. */
#include<iostream>
using namespace std;

int main()
{
	double numlimite=0,numsuma1=1,numsuma2=2,numsuma3=0,numsuma=0;
	char repetir;
	int i=0;
	do{
		cout << " -------- SERIE FIBONACCI -------- " << endl;
		cout << "Introduzca el numero limite: " << endl;
		cin >> numlimite;
		
		if(numlimite <= 0){
			cout << "El numero limite ingresado no es valido." << endl;
			return 1;
		}
		cout << numsuma1 << endl;
		cout << numsuma2 << endl;
		for(i = 0;i < numlimite;  i++){
			numsuma3 = (numsuma1 + numsuma2);
			numsuma += numsuma3;
			
			cout << numsuma << endl;
		}
		cout << "Desea repetir el programa?: (s/n) " << endl;
		cin >> repetir;
	}while(repetir == 's' || repetir == 'S');
	return 0;
}