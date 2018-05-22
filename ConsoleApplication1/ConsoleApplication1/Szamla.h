#pragma once
#ifndef Szamla_H
#define Szamla_H
#include "SajtBurger.h"
#include "SimaBurger.h"
#include "SultKrumpli.h"
#include "Udito.h"
#include "VegaBurger.h"
#include "Menu.h"
#include <list>

class Szamla
{
private:
	list <SajtBurger> SaB;
	list <SimaBurger> SiB;
	list <VegaBurger> VaB;
	list <Udito> Ud;
	list <SultKrumpli> Kru;
	list <Menu> Men;
	int ar = 0;
public:
	Szamla();
	void add(SajtBurger s);
	void add(SimaBurger s);
	void add(VegaBurger s);
	void add(Udito s);
	void add(SultKrumpli s);
	void add(Menu s);

	void del(SajtBurger s);
	void del(SimaBurger s);
	void del(VegaBurger s);
	void del(Udito s);
	void del(SultKrumpli s);
	void del(Menu s);
	void Kiir();
	~Szamla();
};
#endif
