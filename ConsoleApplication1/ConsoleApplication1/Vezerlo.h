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
#include "Ceg.h"
#include "Naplo.h"
#include "Vasarlo.h"

class Vezerlo
{
private:
	bool tortenteleutes; //t�rt�nt e le�t�s 
public:
	Vezerlo();
	void MenuKiiras();
	void UjvasarlasKiiras();
	void vasarlas(SajtBurger s, SimaBurger si, VegaBurger v, EgyediBurger Egyedb, SultKrumpli su, Udito ud, Menu me, Szamla szamla,Ceg c,Naplo naplo,Vasarlo va);
	int Krumpli();
	int hamburger();
	int UditoMeret();
	int UditoFajta();
	EgyediBurger Egyedi(EgyediBurger Egyedb);
	~Vezerlo();
};

#endif // !1
