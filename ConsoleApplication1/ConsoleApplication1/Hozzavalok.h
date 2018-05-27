#ifndef HOZZAVALOK_H
#define HOZZAVALOK_H
#include "stdafx.h"
#include <string>

using namespace std;
class Hozzavalok
{	
public:
	static string pogacsa;
	static string hus;
	static string sajt;
	static string salata;
	static string tofu;
	static string uborka;
	static string ketchup;
	static string mustar;
	static int pogacsaar;
	static int husar;
	static int sajtar;
	static int tofuar;
	static int uborkaar;
	static int ketchupar;
	static int mustarar;
	static int salataar;

	Hozzavalok();
	void static kiirat();
	void static kiiratsorszammal();
	~Hozzavalok();
};
#endif 
