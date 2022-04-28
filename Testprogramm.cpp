#include "Klasse_Auto.h"
#include <iostream>
using namespace std;

int main()
{
//Ojekt erstellen durch Standardkonstruktor:
Klasse_Auto Auto_1 = Klasse_Auto();

//Objekt erstellen durch allgemeinen Konstruktor:
Klasse_Auto Auto_2 = Klasse_Auto(4,"rot",65,5,6.f,43.f,43.f );

//Kopierkonstruktor:
Klasse_Auto Auto_3 = Klasse_Auto(Auto_2);
	
//Objekt erstellen auf dem Stack:
Klasse_Auto Auto_1 = Klasse_Auto();
//Objekt erstellen im Datensegment:
static Klasse_Auto Auto_2 = Klasse_Auto();
//Objekt erstellen auf dem Heap:
Klasse_Auto* Auto_3 = new Klasse_Auto();
delete Auto_3;
};
