#pragma once
#ifndef VEZERLO_H
#define VEZERLO_H
#include <conio.h>
#include "Hozzavalok.h"

#include "Hamburger.h" // absztrakt
#include "SimaBurger.h"
#include "SajtBurger.h"
#include "VegaBurger.h"
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
	void vasarlas(SajtBurger s, SimaBurger si, VegaBurger v, SultKrumpli su, Udito ud, Menu me, Szamla szam);
	int Krumpli();
	int hamburger();
	int UditoMeret();
	int UditoFajta();
	~Vezerlo();
};

#endif // !1
