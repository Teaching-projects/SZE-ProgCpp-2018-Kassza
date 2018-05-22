#ifndef Udito_H
#define Udito_H
#pragma once
#include <string>

using namespace std;

class Udito
{
private:
	int fajta;
	int ar;
	int adag;
	string nev = "";
	void arBeallit(int meret);
public:
	Udito();
	int getFajta();
	int getAr();
	int getAdag();
	void setFajta(int ujfajta);
	void Kiir();
	void setAdag(int meret);
	string getNev();
	~Udito();
};
#endif

