#include "stdafx.h"
#include "SimaBurger.h"
#include "Hozzavalok.h"
#include "Hamburger.h"
#include <list>
#include <iostream>

SimaBurger::SimaBurger()
{
}

SimaBurger::SimaBurger(Hozzavalok e)
{
	menu = 0;
	Ar = 300;
	alapanyag.push_back(e.getPogacsa());
	alapanyag.push_back(e.getHus());
	alapanyag.push_back(e.getSalata());
}

void SimaBurger::HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad) {
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

void SimaBurger::ElveszAlapAnyagot(Hozzavalok e, int hozzaad) {
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

void SimaBurger::Kiir() {
	for (string n : alapanyag) {
		std::cout << n << '\n';
	}
}

int SimaBurger::getAr() {
	return Ar;
}

void SimaBurger::KiirNev() {
	cout << this->nev;
}
SimaBurger::~SimaBurger()
{
}