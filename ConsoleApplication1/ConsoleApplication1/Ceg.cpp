#include "stdafx.h"
#include "Ceg.h"
#include <iostream>


Ceg::Ceg()
{
	this->cegnev = "C�G NEVE";
	this->adoszam = "00000-00000-00000";
	this->cim = "C�G C�ME";
	this->vezetoNeve = "VEZET� NEVE";
	this->telefonszam = "0123456789";
}

string Ceg::getNev() {
	return cegnev;
}

string Ceg::getAdoszam() {
	return adoszam;
}

string Ceg::getVezetoNev() {
	return vezetoNeve;
}

string Ceg::getTelefonszam() {
	return telefonszam;
}

Ceg::~Ceg()
{
}
