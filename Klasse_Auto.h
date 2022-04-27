#pragma once
#include <iostream>
using namespace std;

class Klasse_Auto {
private:
	int radzahl;
	string farbe;
	int ps;
	int anzahl_sitze;
	int spritverbrauch;
	int tankinhalt;
	int tankgroesse;
public:
	float fahren(float strecke);

	//Standartkonstruktor:
	Klasse_Auto();

	//allgemeiner Konstruktor:
	Klasse_Auto(int Radzahl, string Farbe, int Ps, int Anzahl_Sitze, int Spritverbrauch, int Tankinhalt, int Tankgroesse);
	

	//Kopierkonstruktor:
	Klasse_Auto(const Klasse_Auto& c);

	//Destruktor:
	~Klasse_Auto();

	//Getter-&Setter-Methoden
	int getradzahl();
	int getfarbe();
	int getps();
	int getanzahl_sitze();
	int getspritverbrauch();
	int gettankinhalt();
	int settankinhalt();
	int gettankgroesse();

};