#ifndef Ceg_H
#define Ceg_H
#pragma once

#include <iostream>
using namespace std;
class Ceg
{
private:
	string cegnev;
	string adoszam;
	string cim;
	string vezetoNeve;
	string telefonszam;

public:


	Ceg();
	string getNev();
	string getAdoszam();
	string getVezetoNev();
	string getTelefonszam();
	~Ceg();
};
#endif
