#include "stdafx.h"
#include "VegaBurger.h"
#include <iostream>
#include<list>
#include <string>


VegaBurger::VegaBurger()
{
	menu = 0;
	Ar = 450;
	alapanyag.push_back(Hozzavalok::pogacsa);
	alapanyag.push_back(Hozzavalok::tofu);
	alapanyag.push_back(Hozzavalok::salata);
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

string VegaBurger::getNev() {
	return this->nev;
}

VegaBurger::~VegaBurger()
{
}
