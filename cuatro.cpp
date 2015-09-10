/*
Equipo: 	Juan Jesus Navarro Avalos
			Grecia Judith Lopez Suazo
			Carlos Hidalgo Santos
Fecha: 		9 de septiembre del 2015	
Materia: 	Programacion orientada a objetos (3er semestre)
Uso:		Hace un contador que va de 5 en 5 hasta 100
*/
#include <iostream>//Librerias
#include <stdlib.h>//Librerias
using namespace std;

int main(){
	int x=0;
	do //Contar de 5 en 5...
	{
		x=x+5;
		cout<<x<<" , "<<endl;
	}while(x<=99);//Hasta que llegue a 100
	system("PAUSE");
	return 0;
}
