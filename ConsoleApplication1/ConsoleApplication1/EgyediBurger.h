#ifndef EgyediBurger_H
#define EgyediBurger_H
#pragma once
#include "Hamburger.h"
#include <list>
#include "Hozzavalok.h"

class EgyediBurger :public Hamburger
{
private:
	list <string> alapanyag;
	int ar;
	string nev;
public:
	EgyediBurger();
	~EgyediBurger();
	void HozzaAddAlapAnyagot(int hozzaad);
	void ElveszAlapAnyagot(int elvesz);
	int getAr();
	void KiirNev();
	void Kiir();
	list<string> alapanyagokvisszaadd();
	void setAr(int ar);
	void urit();
};
#endif

