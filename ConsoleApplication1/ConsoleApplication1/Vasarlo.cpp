#include "stdafx.h"
#include "Vasarlo.h"
#include <cstdlib>
#include <string>


Vasarlo::Vasarlo()
{
}

int Vasarlo::randomgen()
{
	return rand() % 1;

}


string Vasarlo::randomgenString()
{
	string osszefuzz;
	for (int i = 0; i < 8; i++)
	{
		osszefuzz = osszefuzz + to_string(randomgen());
	}
	return string();
}

Vasarlo::~Vasarlo()
{
}