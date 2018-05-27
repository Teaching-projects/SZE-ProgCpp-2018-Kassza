#include "stdafx.h"
#include "SajtBurger.h"
#include "Hozzavalok.h"
#include "Hamburger.h"
#include <iostream>
#include <list>
#include <string>



using namespace std;


SajtBurger::SajtBurger()
{
	Ar = 400;
	alapanyag.push_back(Hozzavalok::pogacsa);
	alapanyag.push_back(Hozzavalok::hus);
	alapanyag.push_back(Hozzavalok::uborka);
	alapanyag.push_back(Hozzavalok::sajt);
}

void SajtBurger::Kiir() {
	for (string n : alapanyag) {
		std::cout << n << '\n';
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

