#include "stdafx.h"
#include "VegaBurger.h"
#include <iostream>
#include<list>


VegaBurger::VegaBurger()
{
}

VegaBurger::VegaBurger(Hozzavalok e)
{
	menu = 0;
	Ar = 450;
	alapanyag.push_back(e.getPogacsa());
	alapanyag.push_back(e.getTofu());
	alapanyag.push_back(e.getSalata());
}

void VegaBurger::HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad) {
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

void VegaBurger::ElveszAlapAnyagot(Hozzavalok e, int hozzaad) {
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

void VegaBurger::Kiir() {
	for (string n : alapanyag) {
		std::cout << n << '\n';
	}
}

int VegaBurger::getAr() {
	return Ar;
}

void VegaBurger::KiirNev() {
	cout << this->nev;
}

VegaBurger::~VegaBurger()
{
}
