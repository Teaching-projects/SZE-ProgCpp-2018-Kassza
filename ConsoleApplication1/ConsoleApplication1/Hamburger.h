#pragma once
#ifndef HAMBURGER_H
#define HAMBURGER_H
#include "Hozzavalok.h"
#include <list>

class Hamburger
{
protected:
	int Ar = 0;
public:
	Hamburger();
	virtual void Kiir() = 0;
	~Hamburger();
};
#endif // !Hamburger