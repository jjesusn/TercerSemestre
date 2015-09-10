/*
Equipo: 	Juan Jesus Navarro Avalos
			Grecia Judith Lopez Suazo
			Carlos Hidalgo Santos
Fecha: 		9 de septiembre del 2015	
Materia: 	Programacion orientada a objetos (3er semestre)
Uso:		Este programa pide dos datos al usuario, los compara y muestra el mayor
*/
#include <iostream>//Libreria
using namespace std;

int main(){
	int a,b;//Inicializas dos variables del tipo int
	cout<<"Introduce un numero: \n";//Pides el primer numero al usuario
	cin>>a;//Lo almacenas en la variable a
	cout<<"Introduce otro numero: \n";//Pides un segundo numero al usuario
	cin>>b;//Lo almacenas en la variable b
	if(a>b){//Comparas, si el numero "a" es mayor que el "b" entonces...
		cout<<a;//Imprimes "a"
	}else{//Si no, es decir, si es mayor "b" entonces...
		cout<<b;//Imprimes "b"
	}//Fin de la comparacion
}//Final del constructor main
