#include "stdafx.h"
#include "Hozzavalok.h"
#include <iostream>
#include <string>
using namespace std;
Hozzavalok::Hozzavalok()
{
	pogacsa = "pogacsa";
	hus = "hus";
	sajt = "sajt";
	salata = "salata";
	tofu = "tofu";
	uborka = "uborka";
	ketchup = "ketchup";
	mustar = "mustar";
	 pogacsaar=50;
	 husar=100;
	 sajtar=60;
	 tofuar=70;
	 uborkaar=20;
	 ketchupar=30;
	 mustarar=35;
}

string Hozzavalok::getPogacsa() {
	return pogacsa;
}

string Hozzavalok::getHus() {
	return hus;
}

string Hozzavalok::getSajt() {
	return sajt;
}

string Hozzavalok::getSalata() {
	return salata;
}

string Hozzavalok::getTofu() {
	return tofu;
}

string Hozzavalok::getUborka() {
	return uborka;
}

string Hozzavalok::getKetchup() {
	return ketchup;
}

string Hozzavalok::getMustar() {
	return mustar;
}

int Hozzavalok::getPogacsaAr()
{
	return pogacsaar;
}

int Hozzavalok::getHusAr()
{
	return husar;
}

int Hozzavalok::getSajtAr()
{
	return sajtar;
}

int Hozzavalok::getTofuAr()
{
	return tofuar;
}

int Hozzavalok::getUborkaAr()
{
	return uborkaar;
}

int Hozzavalok::getKetchuoAr()
{
	return ketchupar;
}

int Hozzavalok::getMustarAr()
{
	return mustarar;
}

void Hozzavalok::kiirat() {
	cout << getPogacsa() << endl << getHus() << endl << getKetchup() << endl << getMustar() << endl << getSajt() << endl << getSalata() << endl << getTofu() << endl << getUborka() << endl;
}

void Hozzavalok::kiiratsorszammal() {
	cout << "1."<< getPogacsa() << endl << "2." << getHus() << endl << "3." << getKetchup() << endl << "4." << getMustar() << endl << "5." << getSajt() << endl
		<< "6." << getSalata() << endl << "7." << getTofu() << endl << "8." << getUborka() << endl;
}
Hozzavalok::~Hozzavalok()
{
}
