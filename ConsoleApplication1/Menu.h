#ifndef Menu_H
#define Menu_H
#pragma once
#include "SajtBurger.h"
#include "SimaBurger.h"
#include "VegaBurger.h"
#include "SultKrumpli.h"
#include "Udito.h"
#include <vector>

using namespace std;
class Menu
{
private:
	vector <int> melyik;
	vector <SajtBurger> sajtburger;
	vector <SimaBurger> simaburger;
	vector <VegaBurger> vegaburger;
	vector <SultKrumpli> krupli;
	vector <Udito> udito;
	
	int ar;
	double kedvezmeny = 0.80;
	void ArSzamolas();

public:
	Menu();
	void menuHozzaAdd(SimaBurger sima,int a, SajtBurger burger, int b, VegaBurger vega, int c, SultKrumpli krupli, Udito udito);
	int getAr();
	void setKedvezmeny(double kedv);
	double getKedvezmeny();
	void Kiir(int hanyadik);
	~Menu();
};
#endif
