/*
Equipo: 	Juan Jesus Navarro Avalos
			Grecia Judith Lopez Suazo
			Carlos Hidalgo Santos
Fecha: 		9 de septiembre del 2015	
Materia: 	Programacion orientada a objetos (3er semestre)
Uso:		Pides al usuario el valor de un radio para calcular la area de un circulo
*/
#include <iostream>//Libreria
using namespace std;

int main(){
	float const Pi=3.141592;//Declaras la constante Pi
	float radio,area=0.0;//Declaras dos variables del tipo int
	cout<<"introduce el radio: ";//Preguntas al usuario el valor del radio
	cin>>radio;//Almacenas el valor del radio en la variable "radio"
	area = Pi*(radio*radio);//Haces el calculo, el area de un circulo es igual a Pi por radio al cuadrado
	cout <<"La area es: "<<area;//Imprimes el valor del area
}//final del constructor main