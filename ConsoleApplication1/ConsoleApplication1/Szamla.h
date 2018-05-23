#pragma once
#ifndef Szamla_H
#define Szamla_H
#include "SajtBurger.h"
#include "SimaBurger.h"
#include "SultKrumpli.h"
#include "Udito.h"
#include "VegaBurger.h"
#include "EgyediBurger.h"
#include "Menu.h"
#include "Ceg.h"
#include <list>
#include <iostream>

class Szamla
{
private:
	list <SajtBurger> SaB;
	list <SimaBurger> SiB;
	list <VegaBurger> VaB;
	list <Udito> Ud;
	list <SultKrumpli> Kru;
	list <Menu> Men;
	list <EgyediBurger> EgB;
	int ar = 0;
public:
	Szamla();
	void add(SajtBurger s);
	void add(SimaBurger s);
	void add(VegaBurger s);
	void add(Udito s);
	void add(SultKrumpli s);
	void add(Menu s);
	void add(EgyediBurger s);

	void del(SajtBurger s);
	void del(SimaBurger s);
	void del(VegaBurger s);
	void del(Udito s);
	void del(SultKrumpli s);
	void del(Menu s);
	void del(EgyediBurger s);

	void Kiir();
	void SzamlaKeszites(Ceg c);
	void Kiira(ofstream a);
	int getAr();
	~Szamla();
};
#endif
