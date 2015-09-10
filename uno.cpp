/*
Equipo: 	Juan Jesus Navarro Avalos
			Grecia Judith Lopez Suazo
			Carlos Hidalgo Santos
Fecha: 		9 de septiembre del 2015	
Materia: 	Programacion orientada a objetos (3er semestre)
Uso:		Pides al usuario un numero que representa kilometros y lo conviertes a millas
*/
#include <iostream>//Libreria 1
#include <conio.h>//Libreria 2
using namespace std;//Siempre usalo

 int main(){
 	float const milla=0.6213;//Una constante que equivale a cuantos kilometros vale una milla
 	float x,resultado=0.0;
 	cout <<"Introduce el numero de kilometros: ";//Pide al usuario un numero
 	cin >>x;//Almacena el dato del usuario en la variable x
 	resultado =x*milla;//Realiza el calculo con el dato del usuario y la constante
 	cout <<"Son: "<<resultado<<"millas";//Muestra el resultado 
 }//Final del constructor main