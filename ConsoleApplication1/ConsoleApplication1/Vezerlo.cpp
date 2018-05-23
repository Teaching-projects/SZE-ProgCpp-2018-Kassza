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

void Vezerlo::vasarlas(SajtBurger s, SimaBurger si, VegaBurger v, EgyediBurger Egyedb,  SultKrumpli su, Udito ud, Menu me, Szamla szamla, Hozzavalok h1,Ceg ceg)
{
	bool exit = false;
	int adag = 0; //adatbekéréshez segéd
	int seged = 0;//adatbekéréshez segéd
	do
	{
		UjvasarlasKiiras(); //vásárlási lehetõségek kiegészítése
		switch (_getch()) //egy karakterbekérése
		{
		case 49: //sajtburger
			szamla.add(s);//számlához add 
			break;
		case 50: //sima
			szamla.add(si);//számlához add 
			break;
		case 51: //vega
			szamla.add(v);//számlához add 
			break;
		case 52: //üdítõ
			seged = UditoFajta(); //adatbekérés hibás paraméter esetén -1 a visszatérési érték
			if (seged != -1) { //ha jó az adatbemente
				ud.setFajta(seged); //üdítõ fajtájának beállítása
				seged= UditoMeret(); //adatbekérés hibás paraméter esetén -1 
				if (seged != -1) { //ha helyes a bemeneti paraméter a méretre
					ud.setAdag(seged); //adagbeállítása
					szamla.add(ud);//számlához add
				}
				else //hibás paraméter esetén (üdítõ méret)
				{
					system("cls");
					cout << "Hibas bemenet";
					getchar();
				}
			}
			else//hubás paraméter esetén üdítõ fajta)
			{
				system("cls");
				cout << "Hibas bemenet";
				getchar();
			}
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
			int a, b, c; //segéd változók a menü választáshoz
			a = b = c = 0;
			bool OK = true;
			seged = hamburger(); //hamburger választása -1 az érték ha rossz a bemeneti adat
			if (seged == -1) {
				OK = false;
				system("cls");
				cout << "Hibas bemenet";
				getchar();
			}
			else if (seged == 1) //ha sajtburgert választottak
			{
				b = 1; //sajtburger 1 a többit 0 a=0,b=1,c=0 
			}
			else if (seged == 2) //simaburger esetén
			{
				a = 1;
			}
			else if (seged == 3) //vegaburgeresetén
			{
				c = 1;
			}

			if (OK == true) { //ha az eddigi adatbemenetek helyesek voltak kiválaszthajuk a krumplit
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
			if (OK == true) { //ha az eddigi adatbemenetek helyesek voltak kiválaszthajuk az üdítõt 
				int seged = UditoFajta();
				if (seged != -1) {
					ud.setFajta(seged);
				}
				seged = UditoMeret();
				if (seged != -1) {
					ud.setAdag(seged);


				}
			}

			if (OK == true) {// ha minden paraméter helyes volt akkor beállíthatjuk a példány paramétereit és hozzáadjuk a listához
				me.menuHozzaAdd(si, a, s, b, v, c, su, ud);
				szamla.add(me);
			}
		
		}
		break;
		case 55: //egyedi burger készítés
			Egyedb= Egyedi( h1 ,Egyedb); //átadjuk a példányt és a visszatérési érték felülírja saját magát ez azért szükséges mivel minden esetben már lehet ezért nem tudjuk elérebeállítani a paramétereket ezért saját magár felül kell írnia mindig
			if (Egyedb.getAr() != 0) { //ha hibás a bemeneti adat a példánynak nem lesz értéke ezért nem adhatjuk hozzá a listához
				szamla.add(Egyedb); //listához adás
				Egyedb.urit();//lista ürítése ár változó beállítása ar=0;
				
			}
			break;
		case 56: //kiir
			system("cls");
			szamla.Kiir();
			szamla.SzamlaKeszites(ceg);
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

EgyediBurger Vezerlo::Egyedi(Hozzavalok h1,EgyediBurger Egyedb)
{
	bool kilep = false;
	bool kilepbelso = false;
	system("cls");
	do
	{
		cout << "1.Hozzáadd" << endl << "2.Elvesz" << endl<<"3.Kiír";
		switch (_getch())
		{
		case 49://hozzáadd
			do
			{
				 kilep = false;
				kilepbelso = false;
				system("cls");
				h1.kiiratsorszammal();
				switch (_getch()) {
				case 49:
					Egyedb.HozzaAddAlapAnyagot(h1, 1);
					break;
				case 50:
					Egyedb.HozzaAddAlapAnyagot(h1, 2);
					break;
				case 51:
					Egyedb.HozzaAddAlapAnyagot(h1, 3);
					break;
				case 52:
					Egyedb.HozzaAddAlapAnyagot(h1, 4);
					break;
				case 53:
					Egyedb.HozzaAddAlapAnyagot(h1, 5);
					break;
				case 54:
					Egyedb.HozzaAddAlapAnyagot(h1, 6);
					break;
				case 55:
					Egyedb.HozzaAddAlapAnyagot(h1, 7);
					break;
				case 56:
					Egyedb.HozzaAddAlapAnyagot(h1, 8);
					break;
				case 27:
					kilepbelso = true;
					break;
				default:
					break;
				}
				system("cls");
			} while (!kilepbelso);
			kilepbelso = false;
			break;
		case 50: // töröl
			do
			{
				system("cls");
				h1.kiiratsorszammal();
				switch (_getch()) {
				case 49:
					Egyedb.ElveszAlapAnyagot(h1, 1);
					break;
				case 50:
					Egyedb.ElveszAlapAnyagot(h1, 2);
					break;
				case 51:
					Egyedb.ElveszAlapAnyagot(h1, 3);
					break;
				case 52:
					Egyedb.ElveszAlapAnyagot(h1, 4);
					break;
				case 53:
					Egyedb.ElveszAlapAnyagot(h1, 5);
					break;
				case 54:
					Egyedb.ElveszAlapAnyagot(h1, 6);
					break;
				case 55:
					Egyedb.ElveszAlapAnyagot(h1, 7);
					break;
				case 56:
					Egyedb.ElveszAlapAnyagot(h1, 8);
					break;
				case 27:
					kilepbelso = true;
					break;
				default:
					break;
				}
				system("cls");
			} while (!kilepbelso);
			break;
			kilepbelso = false;
			system("cls");
		case 51:
			system("cls");
			Egyedb.Kiir();
			getchar();
			system("cls");
			break;
		case 27:
			kilep = true;
		default:
			break;
		}
	} while (!kilep);
	return Egyedb;
}


Vezerlo::~Vezerlo()
{
}
