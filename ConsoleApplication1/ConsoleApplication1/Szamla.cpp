#include "stdafx.h"
#include "Szamla.h"
#include "Ceg.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;
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

void Szamla::add(EgyediBurger s)
{
	EgB.push_back(s);
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

void Szamla::del(EgyediBurger s)
{
	EgB.pop_back();
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


	if (EgB.size() != 0) {
		for (EgyediBurger n : EgB) {
			n.Kiir();
			cout << "		";
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
			cout << n.getAr(melyik) << endl;
			ar = ar + n.getAr(melyik);
			cout << "-----------------------------------------------------------" << endl;
			melyik++;
		}
	}
	cout << "		" << ar << endl;;
	ar = 0;
}

void Szamla::SzamlaKeszites(Ceg ceg) {
	ar = 0; //ár nullázása azért az elején hogy késõbb feltudjuk használni a naplózáskor
	string datum; //dátum kezelés
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d_%X", &tstruct);
	datum = string(buf);

	ofstream fout;
	fout.open("nyugta.txt"); // stringet nem tud kezelni a fordító 
	//huzzá adja a nyugtához szükséges adatokat (cég név , adószám, sajtb,simab,vegab,krum, üdítõ, menü, ár,szöveg ,datum)
	fout << ceg.getNev()<<'\n'<<ceg.getAdoszam()<<'\n'<<'\n';
	//számla által hazsnált listákon fut végig és írja ki soronként az adatokat
	if (SaB.size() != 0) {
		for (SajtBurger n : SaB) {
			fout << n.getNev();
			fout << "	";
			fout << n.getAr();
			fout << endl;
			ar = ar + n.getAr();
		}
	}

	if (SiB.size() != 0) {
		for (SimaBurger n : SiB) {
			fout << n.getNev();
			fout << "	";
			fout << n.getAr();
			fout << endl;
			ar = ar + n.getAr();
		}
	}

	if (VaB.size() != 0) {
		for (VegaBurger n : VaB) {
			fout << n.getNev();
			fout << "	";
			fout << n.getAr();
			fout << endl;
			ar = ar + n.getAr();
		}
	}

	if (Kru.size() != 0) {
		for (SultKrumpli n : Kru) {
			fout << n.getNev()<<"	"<<n.getAdag();
			fout << "	";
			fout << n.getAr() << endl;
			ar = ar + n.getAr();
		}
	}

	if (Ud.size() != 0) {
		for (Udito n : Ud) {
			fout<<n.getNev()<<"	"<< n.getAdag();
			fout << "	";
			fout << n.getAr() << endl;
			ar = ar + n.getAr();
		}
	}

	//speciális mivel az egyedi burger is egy osztályból áll és az annak az osztály elemeit kell visszaadnunk amit az adott listába belepakoltunk
	if (EgB.size() != 0) {
		list <string> alap;
		string a;
		for (EgyediBurger n : EgB) {
			alap = n.alapanyagokvisszaadd();
			for (std::list<string>::iterator it = alap.begin(); it != alap.end(); ++it)
				fout << *it<<endl;
			fout << "		";
			fout << n.getAr() << endl;
			ar = ar + n.getAr();
		}
	}

	//menu osztály végzi a fájl kiírást mivel egy menühöz nem csak egy burger tartozik hanem krumpli és ital ezáltal így könnyebb és gyorsabb a kiíratás
	if (Men.size() != 0) {
		string menu;
		int melyik = 0;
		for (Menu n : Men) {
			menu= n.Kiirf(melyik);
			fout << menu;
			menu.clear();
			fout << "		";
			fout << n.getAr(melyik) << endl;
			ar = ar + n.getAr(melyik);
			melyik++;
		}
	}
	fout <<'\n'<< "		" << ar << '\n';
	fout << "Köszönjük a vásárlást";
	fout << '\n' << '\n' << datum;
	fout.close();
}


int Szamla::getAr()
{
	return this->ar;
}

Szamla::~Szamla()
{
}
