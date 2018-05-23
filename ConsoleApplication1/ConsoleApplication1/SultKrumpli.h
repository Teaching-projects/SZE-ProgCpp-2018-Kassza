#pragma once
#ifndef SultKrumpli_H
#define SultKrumpli_H
#include <string>
using namespace std;
class SultKrumpli
{
private:
	int Ar;
	int Adag;
	string Nev;
	void ujAr();

public:
	SultKrumpli();
	void setSultKrumpli(int adag);
	int getAr();
	int getAdag();
	string getNev();
	void setAdag(int meret);
	void Kiir();
	~SultKrumpli();
};
#endif

