/*
Roberto Iglesias
14042015
Programa demostrativo de tipos de datos y operaciones
*/
#include <iostream>
#include <string.h>

using namespace std;

int main (){
	
	int entero1=0, entero2=0;
	float real1=0, real2=0;
	char pal1[64]= "", pal2[64] ="", oracion[128] ="";
	bool booleano1, booleano2; 
	
	/*Ingreso de los numeros enteros*/
	cout << "Ingrese un numero entero A" <<endl;
	cin >> entero1;
	cout << "Ingrese un numero entero B" <<endl;
	cin >> entero2;
	
	/*Operaciones con los numeros enteros*/
	cout << "Suma\n" << entero1+entero2 << endl << endl; 
	cout << "Resta\n" << entero1-entero2 << endl << endl; 
	cout << "Multiplicacion\n" << entero1*entero2 << endl << endl; 
	cout << "Division\n" << entero1/entero2 << endl << endl; 
	cout << "Resto de la division entera\n" << entero1%entero2 << endl << endl; 
	/*Comparacion entre los numeros enteros*/
	if (entero1==entero2) {
	cout<<"Los numeros son iguales"<<endl << endl;
	}
	 else{
		if(entero1>entero2) cout<<"El numero A es mayor" << endl << endl;
		else cout<<"El numero B es mayor"<<endl << endl;
	}
	
	/*Ingreso de los numeros con coma flotante*/
	cout << "Ingrese un numero real A" <<endl;
	cin >> real1;
	cout << "Ingrese un numero real B" <<endl;
	cin >> real2;
	
	/*Operaciones con los numeros con coma flotante*/
	cout << "Suma\n" << real1+real2 << endl << endl; 
	cout << "Resta\n" << real1-real2 << endl << endl; 
	cout << "Multiplicacion\n" << real1*real2 << endl << endl; 
	cout << "Division\n" << real1/real2 << endl << endl; 
	
	/*Comparacion entre los numeros con coma flotante*/
		if (real1==real2) {
	cout<<"Los numeros son iguales"<<endl;
	}
	 else{
		if(real1<real2) cout<<"El numero A es menor" << endl;
		else cout<<"El numero B es menor"<<endl;
	}
	
	/*Ingreso de los datos alfanumericos*/
	cout << "Ingrese un texto 'A'" << endl;
	cin >> pal1;
	cout << "Ingrese un texto 'B'" <<endl;
	cin >> pal2;
	
	/*Operaciones con caracteres*/
	strcat(oracion, pal1);
	strcat(oracion, pal2);
	
	cout << "Modulo de la primer cadena de texto: "<<strlen(pal1) << endl; //modulo de 
	cout << "Modulo de la segunda cadena de texto: "<<strlen(pal2) <<endl;// una cadena
	if (*pal1==*pal2) cout << "Los textos son identicos" << endl;
	else {
		cout << "Ingreso textos distintos" << endl;
		if (*pal1<*pal2) cout << "El texto B contiene mas caracteres que el A" << endl;
		if (*pal1>*pal2) cout << "El texto A contiene mas caracteres que el B" << endl;
	}
	cout << oracion << endl;
	*oracion = *pal1 & *pal2;
	cout << oracion << endl;
	
	
	/*Ingreso de variables booleanas*/
	cout << "Ingrese 1 o 0 para booleano A" << endl;
	cin >> booleano1;
	cout << "Ingrese 1 o 0 para booleano B" <<endl;
	cin >> booleano2;
	
	// Operaciones con booleanos
	
	cout << "Operacion OR: "<< (booleano2 or booleano1) <<endl;
	cout << "Operacion AND: "<< (booleano2 and booleano1)<< endl;
	cout << "Booleano A Negado: " << not booleano1<<endl; 
	cout << "Booleano B Negado: " << not booleano2 <<endl;
	
	if (booleano1==booleano2)	cout << "Ambos booleanos son iguales"<< endl;
	else {
		if (booleano1>booleano2) cout << "Booleano A es 1 y booleano B es 0" << endl;
		else cout << "Booleano A es 0 y booleano B es 1" << endl;
	}
	
	
	return 0;
}

