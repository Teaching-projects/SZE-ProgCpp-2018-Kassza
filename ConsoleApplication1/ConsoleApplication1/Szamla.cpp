#include "stdafx.h"
#include "Szamla.h"
#include "Ceg.h"
#include <iostream>
#include <fstream>
#include <ctime>

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
	string datum;
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d_%X", &tstruct);
	datum = string(buf);

	ofstream fout;
	fout.open("p.txt"); // stringet nem tud kezelni a fordító 
	fout << ceg.getNev()<<'\n'<<ceg.getAdoszam()<<'\n'<<'\n';
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
	ar = 0;
	fout.close();
}


Szamla::~Szamla()
{
}
