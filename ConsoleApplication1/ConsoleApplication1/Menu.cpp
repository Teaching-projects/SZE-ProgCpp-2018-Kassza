#include "stdafx.h"
#include "Menu.h"
#include "SajtBurger.h"
#include "SimaBurger.h"
#include "VegaBurger.h"
#include "SultKrumpli.h"
#include "Udito.h"
#include <iostream>
#include <stdlib.h>


using namespace std;
Menu::Menu() {
	ar = 0;
	kedvezmeny = 0.80;
}


void Menu::menuHozzaAdd(SimaBurger sima, int a, SajtBurger burger,int b, VegaBurger vega, int c, SultKrumpli krupli, Udito udito){
	if (a != 0)
		melyik.push_back(1);

	if (b != 0)
		melyik.push_back(2);

	if (c != 0)
		melyik.push_back(3);

	this->simaburger.push_back(sima);
	this->sajtburger.push_back(burger);
	this->vegaburger.push_back(vega);
	this->krupli.push_back(krupli);
	this->udito.push_back(udito);
}

int Menu::getAr(int i)
{
	ArSzamolas(i);
	return ar;
}


void Menu::setKedvezmeny(double kedv)
{
	this->kedvezmeny = kedv;
}

double Menu::getKedvezmeny()
{
	return kedvezmeny;
}


void Menu::ArSzamolas(int i) {
	ar = 0;
	if (sajtburger.size() != 0)
	{
		if (melyik[i] == 2) {
			ar = ar + sajtburger[i].getAr();
		}
	}
		if (vegaburger.size() != 0)
		{
			if (melyik[i] == 3) {
				ar = ar + vegaburger[i].getAr();
			}
		}

		if (simaburger.size() != 0)
		{
			if (melyik[i] == 1) {
				ar = ar + simaburger[i].getAr();
			}
		}
	ar = ar + krupli[i].getAr();
	ar = ar + udito[i].getAr();
	ar = ar * kedvezmeny;
}

void Menu::Kiir(int i){ 

	if (sajtburger.size() != 0) {
		if (melyik[i] == 2) {
			sajtburger[i].KiirNev();
			cout << endl;
			krupli[i].Kiir();
			cout << endl;
			udito[i].Kiir();
			cout << endl;
		}
	}
	
	if (vegaburger.size() != 0) {
		if (melyik[i] == 3) {
			vegaburger[i].KiirNev();
			cout << endl;
			krupli[i].Kiir();
			cout << endl;
			udito[i].Kiir();
			cout << endl;
		}
	}

	if (simaburger.size() != 0) {
		if (melyik[i] == 1) {
			simaburger[i].KiirNev();
			cout << endl;
			krupli[i].Kiir();
			cout << endl;
			udito[i].Kiir();
			cout << endl;
		}
	}
}

Menu::~Menu()
{
}
