#include "stdafx.h"
#include "SultKrumpli.h"
#include <iostream>
#include <string>
using namespace std;
SultKrumpli::SultKrumpli()
{
	Ar = 300;
	Adag = 0;
	Nev = "SültKrumpli";
}

void SultKrumpli::setSultKrumpli(int meret)
{
	if (meret == 1) {
		Ar = 200;
		Adag = 1;
	}
	else if (meret == 2) {
		Ar = 300;
		Adag = 2;
	}
	else if (meret == 3) {
		Ar = 350;
		Adag = 3;
	}
}

int SultKrumpli::getAr() {
	return Ar;
}
int SultKrumpli::getAdag() {
	return Adag;
}

string SultKrumpli::getNev()
{
	return Nev;
}


void SultKrumpli::setAdag(int meret) {
	Adag = meret;
	ujAr();
}

void SultKrumpli::Kiir()
{
	if (Adag == 1)
		cout << "kis kruppli";
	else if (Adag == 2)
		cout << "közepes kruppli";
	else if (Adag == 3)
		cout << "nagy kruppli";
}

string SultKrumpli::visszaMeret()
{
	if (Adag == 1)
		return  "kis kruppli";
	else if (Adag == 2)
		return "közepes kruppli";
	else if (Adag == 3)
		return "nagy kruppli";
}

void SultKrumpli::ujAr() {
	if (Adag == 1)
		Ar = 200;
	else if (Adag == 2)
		Ar = 300;
	else if (Adag == 3)
		Ar = 350;
}

SultKrumpli::~SultKrumpli()
{
}
