#pragma once
#ifndef Naplo_H
#define Naplo_H
#include "Vasarlo.h"

class Naplo
{
private:
	void NaplobaIras();
public:
	void Naploeleres();//az írás miatt akárki a naplot ne tudja írni ezért private methodus de valahogy el kell érni ebben a methodusban külön tudnánk hívni a naplóba írást de mivel most csak ez az egy lesz ezért elég hülyén néz ki;
	Naplo();
	~Naplo();
};
#endif
