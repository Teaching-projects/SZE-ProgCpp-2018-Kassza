#include "stdafx.h"
#include "SimaBurger.h"
#include "Hozzavalok.h"
#include "Hamburger.h"
#include <list>
#include <iostream>
#include <string>



SimaBurger::SimaBurger()
{
	menu = 0;
	Ar = 300;
	alapanyag.push_back(Hozzavalok::pogacsa);
	alapanyag.push_back(Hozzavalok::hus);
	alapanyag.push_back(Hozzavalok::salata);
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

string SimaBurger::getNev() {
	return this->nev;
}
SimaBurger::~SimaBurger()
{
}
