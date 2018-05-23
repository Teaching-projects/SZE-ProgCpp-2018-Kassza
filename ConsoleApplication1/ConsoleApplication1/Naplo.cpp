#include "stdafx.h"
#include "Naplo.h"
#include <iostream>
#include <fstream>
#include "Vasarlo.h"
#include <ctime>
#include <string>
#include "Szamla.h"


using namespace std;

void Naplo::NaplobaIras(Vasarlo v,Szamla sz)
{
	ofstream fout;

	fout.open("naplo.txt" , ios::app);
	string datum;
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d_%X", &tstruct);
	datum = string(buf);

	if (v.randomgen() %2== 0) {
		fout << datum << "	" << "Kézpénzes vásárlás" <<"	"<< sz.getAr()<<endl;
	}
	else
	{
		string kartyaszam = v.randomgenString();
		fout << datum << "	" << "Bankártyás vásárlás"<<"	" <<kartyaszam<<"	" << sz.getAr() << endl;
	}

	fout.close();
}

void Naplo::Naploeleres(Vasarlo v,Szamla sz)
{
	NaplobaIras(v, sz);
}

Naplo::Naplo()
{
}


Naplo::~Naplo()
{
}
