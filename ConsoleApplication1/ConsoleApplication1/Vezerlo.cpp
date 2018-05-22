#include "stdafx.h"
#include "Vezerlo.h"
#include <iostream>
#include <conio.h>
#include "Hozzavalok.h"

#include "Hamburger.h" // absztrakt
#include "SimaBurger.h"
#include "SajtBurger.h"
#include"EgyediBurger.h"
#include "VegaBurger.h"
#include "SultKrumpli.h"
#include "Udito.h"
#include "Menu.h"
#include "Szamla.h"
#include "Vezerlo.h"

using namespace std;
Vezerlo::Vezerlo()
{
}

void Vezerlo::MenuKiiras()
{
	system("cls");
	cout << "1-Új vásárlás" << endl;
	cout << "ESC-Kilépés" << endl;
}

void Vezerlo::UjvasarlasKiiras()
{
	system("cls");
	cout << "1.SajtBurger" << endl;
	cout << "2.SimaBurger" << endl;
	cout << "3.Vegaburger" << endl;
	cout << "4.Üdítõ" << endl;
	cout << "5.Krumpli" << endl;
	cout << "6.Menü" << endl;
	cout << "7.Speciális" << endl;
	cout << "8.Kiír" << endl;
}

void Vezerlo::vasarlas(SajtBurger s, SimaBurger si, VegaBurger v, EgyediBurger Egyedb,  SultKrumpli su, Udito ud, Menu me, Szamla szamla, Hozzavalok h1)
{
	bool exit = false;
	int adag = 0;
	int seged = 0;
	do
	{
		UjvasarlasKiiras();
		switch (_getch())
		{
		case 49: //sajtburger
			szamla.add(s);
			break;
		case 50: //sima
			szamla.add(si);
			break;
		case 51: //vega
			szamla.add(v);
			break;
		case 52: //üdítõ
			ud.setFajta(UditoFajta());
			ud.setAdag(UditoMeret());
			szamla.add(ud);
			break;
		case 53: //krumpli
			adag = Krumpli();
			if (adag != -1) {
				su.setAdag(adag);
				szamla.add(su);
			}
			else
			{
				system("cls");
				cout << "Hibas bemenet";
				getchar();
			}
			break;
		case 54: //menu
		{
			int a, b, c;
			a = b = c = 0;
			bool OK = true;
			seged = hamburger();
			if (seged == -1) {
				OK = false;
				system("cls");
				cout << "Hibas bemenet";
				getchar();
			}
			else if (seged == 1)
			{
				b = 1;
			}
			else if (seged == 2)
			{
				a = 1;
			}
			else if (seged == 3)
			{
				c = 1;
			}

			if (OK == true) {
				adag = Krumpli();
				if (adag != -1) {
					su.setAdag(adag);

				}
				else
				{
					OK = false;
					system("cls");
					cout << "Hibas bemenet";
					getchar();
				}
			}
			if (OK == true) {
				int seged = UditoFajta();
				if (seged != -1) {
					ud.setFajta(seged);
				}
				seged = UditoMeret();
				if (seged != -1) {
					ud.setAdag(seged);


				}
			}
			if (OK == true) {
				me.menuHozzaAdd(si, a, s, b, v, c, su, ud);
				szamla.add(me);
			}
		
		}
		break;
		case 55:
			Egyedi( h1 ,Egyedb);
			break;
		case 56: //kiir
			system("cls");
			szamla.Kiir();
			getchar();
			break;
		case 27: //esc
			exit = true;
			break;
		default:
			break;
		}
	} while (exit != true);
}

int Vezerlo::Krumpli()
{
	system("cls");
	cout << "Krumpli" << endl;
	cout << "1.kicsi" << endl;
	cout << "2.közepes" << endl;
	cout << "3.nagy" << endl;

	switch (_getch())
	{
	case 49:
		return 1;

	case 50:
		return 2;

	case 51:
		return 3;

	default:
		return -1;
	}
}

int Vezerlo::hamburger()
{
	system("cls");
	cout << "1.SajtBurger" << endl;
	cout << "2.SimaBurger" << endl;
	cout << "3.Vegaburger" << endl;
	switch (_getch())
	{
	case 49: //sajtburger
		return 1;
	case 50: //sima
		return 2;
	case 51: //vega
		return 3;
		break;
	default:
		system("cls");
		cout << "Hiba nincs ilyen hamburger" << endl;
		return -1;
	}
}

int Vezerlo::UditoMeret()
{
	system("cls");
	cout << "1.kicsi" << endl;
	cout << "2.közepes" << endl;
	cout << "3.nagy" << endl;
	switch (_getch())
	{
	case 49:
		return 1;

	case 50:
		return 2;

	case 51:
		return 3;

	default:
		return -1;
	}
}

int Vezerlo::UditoFajta() {
	system("cls");
	cout << "1.Cola " << endl;
	cout << "2.Ásványvíz" << endl;
	cout << "3.Pepsi" << endl;
	switch (_getch())
	{
	case 49:
		return 1;

	case 50:
		return 2;

	case 51:
		return 3;

	default:
		return -1;
	}
}

void Vezerlo::Egyedi(Hozzavalok h1,EgyediBurger Egyedb)
{
	bool kilep = false;
	bool kilepbelso = false;
	system("cls");
	do
	{
		cout << "1.Hozzáadd" << endl << "2.Elvesz" << endl;
		switch (_getch())
		{
		case 1://hozzáadd
			do
			{
				system("cls");
				h1.kiiratsorszammal();
				switch (_getch()) {
				case 1:
					Egyedb.HozzaAddAlapAnyagot(h1, 1);
					break;
				case 2:
					Egyedb.HozzaAddAlapAnyagot(h1, 2);
					break;
				case 3:
					Egyedb.HozzaAddAlapAnyagot(h1, 3);
					break;
				case 4:
					Egyedb.HozzaAddAlapAnyagot(h1, 4);
					break;
				case 5:
					Egyedb.HozzaAddAlapAnyagot(h1, 5);
					break;
				case 6:
					Egyedb.HozzaAddAlapAnyagot(h1, 6);
					break;
				case 7:
					Egyedb.HozzaAddAlapAnyagot(h1, 7);
					break;
				case 8:
					Egyedb.HozzaAddAlapAnyagot(h1, 8);
					break;
				case 27:
					kilepbelso = true;
					break;
				default:
					break;
				}
			} while (kilepbelso);
			kilepbelso = false;
			break;
		case 2: // töröl
			do
			{
				system("cls");
				h1.kiiratsorszammal();
				switch (_getch()) {
				case 1:
					Egyedb.ElveszAlapAnyagot(h1, 1);
					break;
				case 2:
					Egyedb.ElveszAlapAnyagot(h1, 2);
					break;
				case 3:
					Egyedb.ElveszAlapAnyagot(h1, 3);
					break;
				case 4:
					Egyedb.ElveszAlapAnyagot(h1, 4);
					break;
				case 5:
					Egyedb.ElveszAlapAnyagot(h1, 5);
					break;
				case 6:
					Egyedb.ElveszAlapAnyagot(h1, 6);
					break;
				case 7:
					Egyedb.ElveszAlapAnyagot(h1, 7);
					break;
				case 8:
					Egyedb.ElveszAlapAnyagot(h1, 8);
					break;
				case 27:
					kilepbelso = true;
					break;
				default:
					break;
				}
			} while (kilep);
			break;
			kilep = false;
		default:
			break;
		}
	} while (kilep);
}


Vezerlo::~Vezerlo()
{
}
