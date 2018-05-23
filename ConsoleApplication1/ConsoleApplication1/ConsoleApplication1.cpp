// ConsoleApplication2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <string>
#include <iostream>
#include <conio.h>

#include "Hozzavalok.h"
#include "Hamburger.h" // absztrakt
#include "SimaBurger.h"
#include "SajtBurger.h"
#include "VegaBurger.h"
#include "SultKrumpli.h"
#include "Udito.h"
#include "Menu.h"
#include "Szamla.h"
#include "Vezerlo.h"
#include "EgyediBurger.h"
#include "Ceg.h"

#define ESC 27

using namespace std;
int main()
{
	setlocale(LC_ALL, "hun"); //ékezetes karakterek engedélyzése

	bool *exit = new bool;
	*exit = false;

	Vezerlo v;
	Hozzavalok h1;
	SajtBurger sajtb(h1);
	SimaBurger simab(h1);
	VegaBurger vegab(h1);
	SultKrumpli krumpli;
	Udito udito;
	Szamla szamla;
	Menu m1;
	EgyediBurger egyedi;

	do
	{
		v.MenuKiiras();
		switch (_getch())//egy darab karakter bekérése 
		{
		case ESC:
			*exit = true;
			break;
		case 49:
			v.vasarlas(sajtb, simab, vegab,egyedi, krumpli, udito, m1, szamla,h1);
			break;
		default:
			system("cls");
			break;
		}
	} while (*exit != true);


	delete exit;
	return 0;
}

