#include "Klasse_Auto.h"
#include <iostream>
using namespace std;

class Klasse_Auto {
	Klasse_Auto();
	Klasse_Auto(int A, string B, int C, int D, int E, int F, int G)
	{
		int radzahl = A;
		string farbe = B;
		int ps = C;
		int anzahl_sitze = D;
		int spritverbrauch = E;
		int tankinhalt = F;
		int tankgroesse = G;
	}
};