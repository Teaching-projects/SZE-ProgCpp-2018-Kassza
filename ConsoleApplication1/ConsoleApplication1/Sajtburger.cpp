#include "stdafx.h"
#include "SajtBurger.h"
#include "Hozzavalok.h"
#include "Hamburger.h"
#include <iostream>
#include <list>



using namespace std;

SajtBurger::SajtBurger()
{
}

SajtBurger::SajtBurger(Hozzavalok e)
{
	Ar = 400;
	alapanyag.push_back(e.getPogacsa());
	alapanyag.push_back(e.getHus());
	alapanyag.push_back(e.getSajt());
	alapanyag.push_back(e.getSalata());
}

void SajtBurger::Kiir() {
	for (string n : alapanyag) {
		std::cout << n << '\n';
	}
}

void SajtBurger::HozzaAddAlapAnyagot(Hozzavalok e, int hozzaad) {
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

void SajtBurger::ElveszAlapAnyagot(Hozzavalok e, int hozzaad) {
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

int SajtBurger::getAr() {
	return Ar;
}

void SajtBurger::KiirNev() {
	cout << this->nev;
}


string SajtBurger::getNev() {
	return this->nev;
}

SajtBurger::~SajtBurger()
{
}

