#pragma once
#ifndef Naplo_H
#define Naplo_H
#include "Vasarlo.h"
#include "Szamla.h"

class Naplo
{
private:
	void NaplobaIras(Vasarlo v,Szamla sz);
public:
	void Naploeleres(Vasarlo v,Szamla sz);//az �r�s miatt ak�rki a naplot ne tudja �rni ez�rt private methodus de valahogy el kell �rni ebben a methodusban k�l�n tudn�nk h�vni a napl�ba �r�st de mivel most csak ez az egy lesz ez�rt el�g h�ly�n n�z ki;
	Naplo();
	~Naplo();
};
#endif
