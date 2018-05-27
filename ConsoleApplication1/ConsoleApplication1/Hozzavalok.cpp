#include "stdafx.h"
#include "Hozzavalok.h"
#include <iostream>
#include <string>

using namespace std;

	string Hozzavalok::pogacsa = "pogacsa";
	string Hozzavalok::hus = "hus";
	string Hozzavalok::sajt = "sajt";
	string Hozzavalok::salata = "salata";
	string Hozzavalok::tofu = "tofu";
	string Hozzavalok::uborka = "uborka";
	string Hozzavalok::ketchup = "ketchup";
	string Hozzavalok::mustar = "mustar";
	int Hozzavalok::pogacsaar = 50;
	int Hozzavalok::husar = 100;
	int Hozzavalok::sajtar = 60;
	int Hozzavalok::tofuar = 70;
	int Hozzavalok::uborkaar = 20;
	int Hozzavalok::ketchupar = 30;
	int Hozzavalok::mustarar = 35;
	int Hozzavalok::salataar = 20;


void Hozzavalok::kiirat() {
	cout << Hozzavalok::pogacsa << endl << Hozzavalok::hus << endl << Hozzavalok::ketchup << endl << Hozzavalok::mustar << endl << Hozzavalok::sajt << endl << Hozzavalok::salata << endl << Hozzavalok::tofu << endl << Hozzavalok::uborka << endl;
}

void Hozzavalok::kiiratsorszammal() {
	cout << "1."<< Hozzavalok::pogacsa << endl << "2." << Hozzavalok::hus << endl << "3." << Hozzavalok::ketchup << endl << "4." << Hozzavalok::mustar << endl << "5." << Hozzavalok::sajt << endl
		<< "6." << Hozzavalok::salata << endl << "7." << Hozzavalok::tofu << endl << "8." << Hozzavalok::uborka << endl;
}
Hozzavalok::~Hozzavalok()
{
}
