#include "stdafx.h"
#include "Vezerlo.h"
#include <iostream>
#include <conio.h>
#include <string>
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
#include "Vasarlo.h"


using namespace std;
Vezerlo::Vezerlo()
{
 tortenteleutes = false;
}

void Vezerlo::MenuKiiras()
{
	system("cls");
	cout << "1-�j v�s�rl�s" << endl;
	cout << "ESC-Kil�p�s" << endl;
}

void Vezerlo::UjvasarlasKiiras()
{
	system("cls");
	cout << "1.SajtBurger" << endl;
	cout << "2.SimaBurger" << endl;
	cout << "3.Vegaburger" << endl;
	cout << "4.�d�t�" << endl;
	cout << "5.Krumpli" << endl;
	cout << "6.Men�" << endl;
	cout << "7.Speci�lis" << endl;
	cout << "8.Ki�r" << endl;
	cout << "0.V�s�rl�s v�ge";
}

void Vezerlo::vasarlas(SajtBurger s, SimaBurger si, VegaBurger v, EgyediBurger Egyedb, SultKrumpli su, Udito ud, Menu me, Szamla szamla, Ceg ceg, Naplo naplo, Vasarlo vas)
{
	bool exit = false;
	int adag = 0; //adatbek�r�shez seg�d
	int seged = 0;//adatbek�r�shez seg�d
	do
	{
		UjvasarlasKiiras(); //v�s�rl�si lehet�s�gek kieg�sz�t�se
		switch (_getch()) //egy karakterbek�r�se
		{
		case 49: //sajtburger
			szamla.add(s);//sz�ml�hoz add 
			tortenteleutes = true;
			break;
		case 50: //sima
			szamla.add(si);//sz�ml�hoz add 
			tortenteleutes = true;
			break;
		case 51: //vega
			szamla.add(v);//sz�ml�hoz add 
			tortenteleutes = true;
			break;
		case 52: //�d�t�
			seged = UditoFajta(); //adatbek�r�s hib�s param�ter eset�n -1 a visszat�r�si �rt�k
			if (seged != -1) { //ha j� az adatbemente
				ud.setFajta(seged); //�d�t� fajt�j�nak be�ll�t�sa
				seged = UditoMeret(); //adatbek�r�s hib�s param�ter eset�n -1 
				if (seged != -1) { //ha helyes a bemeneti param�ter a m�retre
					ud.setAdag(seged); //adagbe�ll�t�sa
					szamla.add(ud);//sz�ml�hoz add
				}
				else //hib�s param�ter eset�n (�d�t� m�ret)
				{
					system("cls");
					cout << "Hibas bemenet";
					getchar();
				}
			}
			else//hib�s param�ter eset�n �d�t� (fajta)
			{
				system("cls");
				cout << "Hibas bemenet";
				getchar();
			}
			tortenteleutes = true;
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
			tortenteleutes = true;
			break;
		case 54: //menu
		{
			int a, b, c; //seg�d v�ltoz�k a men� v�laszt�shoz
			a = b = c = 0;
			bool OK = true;
			seged = hamburger(); //hamburger v�laszt�sa -1 az �rt�k ha rossz a bemeneti adat
			if (seged == -1) {
				OK = false;
				system("cls");
				cout << "Hibas bemenet";
				getchar();
			}
			else if (seged == 1) //ha sajtburgert v�lasztottak
			{
				b = 1; //sajtburger 1 a t�bbit 0 a=0,b=1,c=0 
			}
			else if (seged == 2) //simaburger eset�n
			{
				a = 1;
			}
			else if (seged == 3) //vegaburgereset�n
			{
				c = 1;
			}

			if (OK == true) { //ha az eddigi adatbemenetek helyesek voltak kiv�laszthajuk a krumplit
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
			if (OK == true) { //ha az eddigi adatbemenetek helyesek voltak kiv�laszthajuk az �d�t�t 
				int seged = UditoFajta();
				if (seged != -1) {
					ud.setFajta(seged);
				}
				seged = UditoMeret();
				if (seged != -1) {
					ud.setAdag(seged);
				}
			}

			if (OK == true) {// ha minden param�ter helyes volt akkor be�ll�thatjuk a p�ld�ny param�tereit �s hozz�adjuk a list�hoz
				me.menuHozzaAdd(si, a, s, b, v, c, su, ud);
				szamla.add(me);
			}

		}
		tortenteleutes = true;
		break;
		case 55: //egyedi burger k�sz�t�s
			Egyedb = Egyedi(Egyedb); //�tadjuk a p�ld�nyt �s a visszat�r�si �rt�k fel�l�rja saj�t mag�t ez az�rt sz�ks�ges mivel minden esetben m�r lehet ez�rt nem tudjuk el�rebe�ll�tani a param�tereket ez�rt saj�t mag�r fel�l kell �rnia mindig
			if (Egyedb.getAr() != 0) { //ha hib�s a bemeneti adat a p�ld�nynak nem lesz �rt�ke ez�rt nem adhatjuk hozz� a list�hoz
				szamla.add(Egyedb); //list�hoz ad�s
				Egyedb.urit();//lista �r�t�se �r v�ltoz� be�ll�t�sa ar=0;

			}
			break;
			tortenteleutes = true;
		case 56: //kiir
			system("cls");
			szamla.Kiir(); //ki�rja az aktu�lis sz�ml�n l�v� term�keket
			_getch();
			break;
		case 48: //Fizet�s
			if (tortenteleutes == true) { //t�rt�nt e v�s�rl�s ha nem ne �ll�tson ki felesleges pap�rokat
				szamla.SzamlaKeszites(ceg); //nyugta k�sz�t�s 
				naplo.Naploeleres(vas, szamla);//napl�ba �r�s
			}
			exit = true;
		case 27: //esc
			exit = true;
			break;
		default:
			break;
		}
	} while (exit != true);
	tortenteleutes = false;
}

int Vezerlo::Krumpli()
{
	system("cls");
	cout << "Krumpli" << endl;
	cout << "1.kicsi" << endl;
	cout << "2.k�zepes" << endl;
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
	cout << "2.k�zepes" << endl;
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
	cout << "2.�sv�nyv�z" << endl;
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

EgyediBurger Vezerlo::Egyedi(EgyediBurger Egyedb)
{
	bool kilep = false;
	bool kilepbelso = false;
	system("cls");
	do
	{
		cout << "1.Hozz�add" << endl << "2.Elvesz" << endl<<"3.Ki�r";
		switch (_getch())
		{
		case 49://hozz�add
			do
			{
				 kilep = false;
				kilepbelso = false;
				system("cls");
				Hozzavalok::kiiratsorszammal();
				switch (_getch()) {
				case 49:
					Egyedb.HozzaAddAlapAnyagot( 1);
					break;
				case 50:
					Egyedb.HozzaAddAlapAnyagot( 2);
					break;
				case 51:
					Egyedb.HozzaAddAlapAnyagot( 3);
					break;
				case 52:
					Egyedb.HozzaAddAlapAnyagot( 4);
					break;
				case 53:
					Egyedb.HozzaAddAlapAnyagot( 5);
					break;
				case 54:
					Egyedb.HozzaAddAlapAnyagot( 6);
					break;
				case 55:
					Egyedb.HozzaAddAlapAnyagot( 7);
					break;
				case 56:
					Egyedb.HozzaAddAlapAnyagot( 8);
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
		case 50: // t�r�l
			do
			{
				system("cls");
				Hozzavalok::kiiratsorszammal();
				switch (_getch()) {
				case 49:
					Egyedb.ElveszAlapAnyagot(1);
					break;
				case 50:
					Egyedb.ElveszAlapAnyagot( 2);
					break;
				case 51:
					Egyedb.ElveszAlapAnyagot( 3);
					break;
				case 52:
					Egyedb.ElveszAlapAnyagot( 4);
					break;
				case 53:
					Egyedb.ElveszAlapAnyagot( 5);
					break;
				case 54:
					Egyedb.ElveszAlapAnyagot( 6);
					break;
				case 55:
					Egyedb.ElveszAlapAnyagot( 7);
					break;
				case 56:
					Egyedb.ElveszAlapAnyagot( 8);
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
