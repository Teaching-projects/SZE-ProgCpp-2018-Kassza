#include "stdafx.h"
#include "Ceg.h"
#include <iostream>


Ceg::Ceg()
{
	this->cegnev = "CÉG NEVE";
	this->adoszam = "00000-00000-00000";
	this->cim = "CÉG CÍME";
	this->vezetoNeve = "VEZETÕ NEVE";
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
