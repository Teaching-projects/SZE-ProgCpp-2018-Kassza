#include "stdafx.h"
#include "EgyediBurger.h"
#include <iostream>
#include <conio.h>

#include "Hozzavalok.h"
#include "Hamburger.h" // absztrakt
#include "Udito.h"
#include "Menu.h"
#include "Szamla.h"
#include "Vezerlo.h"

EgyediBurger::EgyediBurger()
{
	ar = 0;
	nev = "Speciális";
}


EgyediBurger::~EgyediBurger()
{
}

void EgyediBurger::HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad) {
	switch (hozzaad)
	{
	case 1:
		alapanyag.push_back(e.getKetchup());
		break;
	case 2:
		alapanyag.push_back(e.getMustar());
		break;
	case 3:
		alapanyag.push_back(e.getSajt());
		break;
	case 4:
		alapanyag.push_back(e.getUborka());
		break;
	case 5:
		alapanyag.push_back(e.getSalata());
		break;
	case 6:
		alapanyag.push_back(e.getTofu());
		break;
	default:
		break;
	}
}

void EgyediBurger::ElveszAlapAnyagot(Hozzavalok e, int hozzaad) {
	switch (hozzaad)
	{
	case 1:
		alapanyag.remove(e.getKetchup());
		break;
	case 2:
		alapanyag.remove(e.getMustar());
		break;
	case 3:
		alapanyag.remove(e.getSajt());
		break;
	case 4:
		alapanyag.remove(e.getUborka());
		break;
	case 5:
		alapanyag.remove(e.getSalata());
		break;
	case 6:
		alapanyag.remove(e.getTofu());
		break;
	default:
		break;
	}
}

void EgyediBurger::Kiir() {
	for (string n : alapanyag) {
		std::cout << n << '\n';
	}
}


int EgyediBurger::getAr() {
	return ar;
}

void EgyediBurger::KiirNev() {
	cout << this->nev;
}