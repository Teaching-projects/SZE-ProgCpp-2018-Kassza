#ifndef HOZZAVALOK_H
#define HOZZAVALOK_H
#include "stdafx.h"
#include <string>

using namespace std;



class Hozzavalok
{
private:
	string pogacsa;
	string hus;
	string sajt;
	string salata;
	string tofu;
	string uborka;
	string ketchup;
	string mustar;
	int pogacsaar;
	int husar;
	int sajtar;
	int tofuar;
	int uborkaar;
	int ketchupar;
	int mustarar;

public:
	Hozzavalok();
	string getPogacsa();
	string getHus();
	string getSajt();
	string getSalata();
	string getTofu();
	string getUborka();
	string getKetchup();
	string getMustar();
	int getPogacsaAr();
	int getHusAr();
	int getSajtAr();
	int getTofuAr();
	int getUborkaAr();
	int getKetchuoAr();
	int getMustarAr();
	void kiirat();

	void kiiratsorszammal();

	~Hozzavalok();
};
#endif 
