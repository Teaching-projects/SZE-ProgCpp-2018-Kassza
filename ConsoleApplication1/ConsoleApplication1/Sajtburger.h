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
	string getNev();
	~SajtBurger();
	int getAr();
	void KiirNev();
	void Kiir();
};
#endif
