#include "stdafx.h"
#include "Szamla.h"
#include <iostream>


Szamla::Szamla()
{
}

void Szamla::add(SajtBurger s)
{
	SaB.push_back(s);
}

void Szamla::add(SimaBurger s)
{
	SiB.push_back(s);
}

void Szamla::add(VegaBurger s)
{
	VaB.push_back(s);
}

void Szamla::add(Udito s)
{
	Ud.push_back(s);
}

void Szamla::add(SultKrumpli s)
{
	Kru.push_back(s);
}

void Szamla::add(Menu s)
{
	Men.push_back(s);
}

void Szamla::del(SajtBurger s)
{
	SaB.pop_back();
}

void Szamla::del(SimaBurger s)
{
	SiB.pop_back();
}

void Szamla::del(VegaBurger s)
{
	VaB.pop_back();
}

void Szamla::del(Udito s)
{
	Ud.pop_back();
}

void Szamla::del(SultKrumpli s)
{
	Kru.pop_back();
}

void Szamla::del(Menu s)
{
	Men.pop_back();
}

void Szamla::Kiir() {
	if (SaB.size() != 0) {
		for (SajtBurger n : SaB) {
			n.KiirNev();
			cout << "	";
			cout << n.getAr();
			cout << endl;
			ar = ar + n.getAr();
			cout << "-----------------------------------------------------------" << endl;
		}
	}

	if (SiB.size() != 0) {
		for (SimaBurger n : SiB) {
			n.KiirNev();
			cout << "	";
			cout << n.getAr();
			cout << endl;
			ar = ar + n.getAr();
			cout << "-----------------------------------------------------------" << endl;
		}
	}

	if (VaB.size() != 0) {
		for (VegaBurger n : VaB) {
			n.KiirNev();
			cout << "	";
			cout << n.getAr();
			cout << endl;
			ar = ar + n.getAr();
			cout << "-----------------------------------------------------------" << endl;
		}
	}

	if (Kru.size() != 0) {
		for (SultKrumpli n : Kru) {
			n.Kiir();
			cout << "	";
			cout << n.getAr() << endl;
			ar = ar + n.getAr();
			cout << "-----------------------------------------------------------" << endl;
		}
	}

	if (Ud.size() != 0) {
		for (Udito n : Ud) {
			n.Kiir();
			cout << "	";
			cout << n.getAr() << endl;
			ar = ar + n.getAr();
			cout << "-----------------------------------------------------------" << endl;
		}
	}


	if (Men.size() != 0) {
		int melyik = 0;
		for (Menu n : Men) {
			n.Kiir(melyik);
			cout << "		";
			cout << n.getAr() << endl;
			ar = ar + n.getAr();
			cout << "-----------------------------------------------------------" << endl;
			melyik++;
		}
	}
	cout << "		" << ar << endl;;
	ar = 0;
}

Szamla::~Szamla()
{
}
