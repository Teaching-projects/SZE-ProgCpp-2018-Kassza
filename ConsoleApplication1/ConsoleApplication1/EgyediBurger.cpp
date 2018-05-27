#include "stdafx.h"
#include "EgyediBurger.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <list>

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
	alapanyag.clear();
}


EgyediBurger::~EgyediBurger()
{
}

void EgyediBurger::HozzaAddAlapAnyagot(int hozzaad) {
	switch (hozzaad)
	{
	case 1:
		alapanyag.push_back(Hozzavalok::ketchup);
		setAr(Hozzavalok::ketchupar);
		break;
	case 2:
		alapanyag.push_back(Hozzavalok::mustar);
		setAr(Hozzavalok::mustarar);
		break;
	case 3:
		alapanyag.push_back(Hozzavalok::sajt);
		setAr(Hozzavalok::sajtar);
		break;
	case 4:
		alapanyag.push_back(Hozzavalok::uborka);
		setAr(Hozzavalok::uborkaar);
		break;
	case 5:
		alapanyag.push_back(Hozzavalok::salata);
		setAr(Hozzavalok::salataar);
		break;
	case 6:
		alapanyag.push_back(Hozzavalok::tofu);
		setAr(Hozzavalok::tofuar);
		break;
	default:
		break;
	}
}

void EgyediBurger::ElveszAlapAnyagot(int hozzaad) {
	switch (hozzaad)
	{
	case 1:
		alapanyag.push_back(Hozzavalok::ketchup);
		break;
	case 2:
		alapanyag.push_back(Hozzavalok::mustar);
		break;
	case 3:
		alapanyag.push_back(Hozzavalok::sajt);
		break;
	case 4:
		alapanyag.push_back(Hozzavalok::uborka);
		break;
	case 5:
		alapanyag.push_back(Hozzavalok::salata);
		break;
	case 6:
		alapanyag.push_back(Hozzavalok::tofu);
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

list <string>EgyediBurger::alapanyagokvisszaadd() {
	return alapanyag;
}

void EgyediBurger::setAr(int ar) {
	this->ar = this->ar + ar;
}

void EgyediBurger::urit()
{
	alapanyag.clear();
	ar = 0;
}

int EgyediBurger::getAr() {
	return ar;
}

void EgyediBurger::KiirNev() {
	cout << this->nev;
}