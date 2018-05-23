#ifndef SAJTBURGER_H
#define SAJTBURGER_H
#pragma once
#include "Hamburger.h"
#include "Hozzavalok.h"
#include <list>
#include <string>



class SajtBurger :public Hamburger {
private:
	list<string> alapanyag;
	string nev = "Sajtburger";
public:
	SajtBurger();
	SajtBurger(Hozzavalok e);
	string getNev();
	~SajtBurger();
	void HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad);
	void ElveszAlapAnyagot(Hozzavalok e, int elvesz);
	int getAr();
	void KiirNev();
	void Kiir();
};
#endif
