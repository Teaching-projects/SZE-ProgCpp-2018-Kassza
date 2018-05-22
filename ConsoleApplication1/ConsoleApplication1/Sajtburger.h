#ifndef SAJTBURGER_H
#define SAJTBURGER_H
#pragma once
#include "Hamburger.h"
#include "Hozzavalok.h"
#include <list>
#include <string>

using namespace std;



class SajtBurger :public Hamburger {
private:
	list<string> alapanyag;
	string nev = "Sajtburger";
	int menu;
public:
	SajtBurger();
	SajtBurger(Hozzavalok e);
	~SajtBurger();
	void HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad);
	void ElveszAlapAnyagot(Hozzavalok e, int elvesz);
	int getAr();
	void KiirNev();
	void Kiir();
};
#endif
