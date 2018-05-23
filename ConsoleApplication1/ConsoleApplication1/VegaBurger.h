#pragma once
#ifndef VegaBurger_H
#define VegaBurger_H
#include "Hamburger.h"
#include <list>
class VegaBurger :public Hamburger
{
private:
	list<string> alapanyag;
	string nev = "Vega Burger";
	int menu;
public:
	VegaBurger();
	VegaBurger(Hozzavalok e);
	void HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad);
	void ElveszAlapAnyagot(Hozzavalok e, int elvesz);
	void Kiir();
	int getAr();
	void KiirNev();
	string getNev();
	~VegaBurger();
};
#endif
