#ifndef SIMABURGER_H
#define SIMABURGER_H
#pragma once
#include "Hamburger.h"
#include "Hozzavalok.h"
#include <list>



using namespace std;
class SimaBurger : public Hamburger {
private:
	list<string> alapanyag;
	string nev = "Sima burger";
	int menu;
public:
	SimaBurger();
	SimaBurger(Hozzavalok e);
	void HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad);
	void ElveszAlapAnyagot(Hozzavalok e, int elvesz);
	int getAr();
	void Kiir();
	void KiirNev();
	string getNev();
	~SimaBurger();
};
#endif
