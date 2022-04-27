#include"Klasse_Auto.h"
#include <iostream>
using namespace std;

float Klasse_Auto::fahren(float strecke)
{
	cin >> tankinhalt;
	cin >> spritverbrauch;

	strecke = tankinhalt - (spritverbrauch / 100.f);

	cout << "Es wurde eine Strecke von " << strecke << "km zurückgelegt.";
}

//Konstruktoren definieren:
//standard:
Klasse_Auto::Klasse_Auto()
{
	radzahl = 4;
	farbe = "rot";
	ps = 65;
	anzahl_sitze = 5;
	spritverbrauch = 6;
	tankinhalt = 43;
	tankgroesse = 43;
}

//allgemein:
Klasse_Auto::Klasse_Auto(int A, string B, int C, int D, int E, int F, int G)
{
	int radzahl = A;
	string farbe = B;
	int ps = C;
	int anzahl_sitze = D;
	int spritverbrauch = E;
	int tankinhalt = F;
	int tankgroesse = G;
}

//Kopie:
Klasse_Auto::Klasse_Auto(const Klasse_Auto& c)
{
	radzahl = c.radzahl;
	farbe = c.farbe;
	ps = c.ps;
	anzahl_sitze = c.anzahl_sitze;
	spritverbrauch = c.spritverbrauch;
	tankinhalt = c.tankinhalt;
	tankgroesse = c.tankgroesse;
}

//Destruktor:
Klasse_Auto::~Klasse_Auto()
{

}
 
//Tankinhalt füllen
int tankinhalt;
int gettankinhalt() const { return tankinhalt; }
bool settankinhalt(int Tankinhalt)
{
	if ((Tankinhalt < 0) || (Tankinhalt > 43)) return false;
	tankinhalt = Tankinhalt;
	return true;
}