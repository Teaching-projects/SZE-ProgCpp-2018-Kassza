#pragma once
#ifndef VEZERLO_H
#define VEZERLO_H
#include <conio.h>
#include "Hozzavalok.h"

#include "Hamburger.h" // absztrakt
#include "SimaBurger.h"
#include "SajtBurger.h"
#include "VegaBurger.h"
#include "EgyediBurger.h"
#include "SultKrumpli.h"
#include "Udito.h"
#include "Menu.h"
#include "Szamla.h"
#include "Vezerlo.h"

class Vezerlo
{
public:
	Vezerlo();
	void MenuKiiras();
	void UjvasarlasKiiras();
	void vasarlas(SajtBurger s, SimaBurger si, VegaBurger v, EgyediBurger Egyedb, SultKrumpli su, Udito ud, Menu me, Szamla szamla,Hozzavalok h1);
	int Krumpli();
	int hamburger();
	int UditoMeret();
	int UditoFajta();
	EgyediBurger Egyedi(Hozzavalok hozzavalo, EgyediBurger Egyedb);
	~Vezerlo();
};

#endif // !1
