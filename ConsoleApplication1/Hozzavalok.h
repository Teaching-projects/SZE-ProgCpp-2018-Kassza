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
	void kiirat();

	~Hozzavalok();
};
#endif 
