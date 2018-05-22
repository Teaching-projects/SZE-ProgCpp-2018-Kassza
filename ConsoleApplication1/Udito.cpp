#include "stdafx.h"
#include "Udito.h"
#include <iostream>


using namespace std;


Udito::Udito()
{
}



int Udito::getAr() {
	return ar;
}

int Udito::getAdag() {
	return adag;
}


void Udito::arBeallit(int meret) {
	switch (meret)
	{
	case 1:
		ar = ar + 50;
		break;
	case 2:
		ar = ar + 80;
		break;
	case 3:
		ar = ar + 100;
		break;
	default:
		break;
	}
}

void Udito::setFajta(int fajtaparameter) {
	if (fajtaparameter == 1) {
		ar = 300;
		arBeallit(this->adag);
		fajta = 1;
		nev = "Cola";
	}
	else if (fajtaparameter == 2) {
		ar = 150;
		arBeallit(this->adag);
		fajta = 2;
		nev = "Ásványvíz";
	}
	else if (fajtaparameter == 3) {
		ar = 250;
		arBeallit(this->adag);
		fajta = 3;
		nev = "Sprite";
	}
	else if (fajtaparameter == 4) {
		ar = 310;
		arBeallit(this->adag);
		fajta = 4;
		nev = "Pepsi";
	}
}

void Udito::Kiir()
{
	if (getAdag() == 1) {
		cout << "kicsi" << " " << getNev();
	}
	else if (getAdag() == 2) {
		cout << "közepes" << " " << getNev();
	}
	else if (getAdag() == 3) {
		cout << "nagy" << " " << getNev();
	}


}

void Udito::setAdag(int meret)
{
	adag = meret;
}

int Udito::getFajta() {
	return fajta;
}

string Udito::getNev() {
	return nev;
}

Udito::~Udito()
{
}
