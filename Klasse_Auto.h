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
	Klasse_Auto();
	Klasse_Auto(int A,string B,int C,int D,int E,int F,int G) :radzahl{ A },farbe{ B },ps{ C },anzahl_sitze{ D },spritverbrauch{ E },tankinhalt{ F },tankgroesse{ G }
	{}
	Klasse_Auto(const Klasse_Auto& c);
	~Klasse_Auto();
};