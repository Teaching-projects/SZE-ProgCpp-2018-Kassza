#include "stdafx.h"
#include "Hozzavalok.h"
#include <iostream>
#include <string>
using namespace std;
Hozzavalok::Hozzavalok()
{
	pogacsa = "pogacsa";
	hus = "hus";
	sajt = "sajt";
	salata = "salata";
	tofu = "tofu";
	uborka = "uborka";
	ketchup = "ketchup";
	mustar = "mustar";
}

string Hozzavalok::getPogacsa() {
	return pogacsa;
}

string Hozzavalok::getHus() {
	return hus;
}

string Hozzavalok::getSajt() {
	return sajt;
}

string Hozzavalok::getSalata() {
	return salata;
}

string Hozzavalok::getTofu() {
	return tofu;
}

string Hozzavalok::getUborka() {
	return uborka;
}

string Hozzavalok::getKetchup() {
	return ketchup;
}

string Hozzavalok::getMustar() {
	return mustar;
}

void Hozzavalok::kiirat() {
	cout << getPogacsa() << endl << getHus() << endl << getKetchup() << endl << getMustar() << endl << getSajt() << endl << getSalata() << endl << getTofu() << endl << getUborka() << endl;
}

Hozzavalok::~Hozzavalok()
{
}
