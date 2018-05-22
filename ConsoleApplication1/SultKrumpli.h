#pragma once
#ifndef SultKrumpli_H
#define SultKrumpli_H
class SultKrumpli
{
private:
	int Ar = 0;
	int Adag = 0;
	void ujAr();

public:
	SultKrumpli();
	void setSultKrumpli(int adag);
	int getAr();
	int getAdag();
	void setAdag(int meret);
	void Kiir();
	~SultKrumpli();
};
#endif

