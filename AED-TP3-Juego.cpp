#include <iostream>

using namespace std;
			
			
main(){
	cout<<"Bienvenido al juego de preguntas y respuestas. \nSeleccione la tematica a la que desea responder ingresando el numero correspondiente \n\n 1.Geografia \n 2.Historia \n 3.Ciencia y tecnologia \n 4.Biologia \n 0.Salir \n\n Ingrese su eleccion: ";
	int opcion=0;
	do{
		cin>>  opcion;
		if (opcion<0 or opcion>4) cout<<"El numero ingresado no es correcto. Por favor, ingrese nuevamente un numero: ";
	}
	while (opcion<0 or opcion>4);
	
	switch (opcion)
	{
		case 1:{
		
			int respuesta;
			
			//PREGUNTA 1
			cout<<"Ha seleccionado Geografia.\nDebera responder 3 preguntas. Si responde mal, el juego termina.\n\n";
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			//PREGUNTA 2
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=3){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			
			//PREGUNTA 3
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n";
			cout <<"El juego ha terminado. Ganaste!";
				
			
			break;
		}
		case 2:{
		
			int respuesta;
			
			//PREGUNTA 1
			cout<<"Ha seleccionado Historia.\nDebera responder 3 preguntas. Si responde mal, el juego termina.\n\n";
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			//PREGUNTA 2
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=3){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			
			//PREGUNTA 3
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n";
			cout <<"El juego ha terminado. Ganaste!";
				
			
			break;
		}
		case 3:{
		
			int respuesta;
			
			//PREGUNTA 1
			cout<<"Ha seleccionado Ciencia y Tecnologia.\nDebera responder 3 preguntas. Si responde mal, el juego termina.\n\n";
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			//PREGUNTA 2
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=3){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			
			//PREGUNTA 3
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n";
			cout <<"El juego ha terminado. Ganaste!";
				
			
			break;
		}
		case 4:{
		
			int respuesta;
			
			//PREGUNTA 1
			cout<<"Ha seleccionado Biologia.\nDebera responder 3 preguntas. Si responde mal, el juego termina.\n\n";
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			//PREGUNTA 2
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=3){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n\n";
			
			
			//PREGUNTA 3
			cout<<"a.*PREGUNTA1*\n1.*OPCION-A*\n2.*OPCIONB*\n3.*OPCIONC*\n\nIngrese el numero de la respuesta correcta: ";
			cin>> respuesta;
		while (respuesta>3 or respuesta<1)
			{
				cout << "El numero ingresado no es correcto. Por favor, ingreselo nuevamente: ";
				cin>> respuesta;
			}
			if(respuesta !=2){
			cout<<"Respuesta incorrecta! Adios!";
			break;
		}
			cout <<"Respuesta correcta\n";
			cout <<"El juego ha terminado. Ganaste!";
				
			
			break;
		}
		case 0:{
			cout<<"Adios!";
			break;
		}
	}
	}
