// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>
#include <conio.h>
#include "stdafx.h"

#define ESC 27
using namespace std;
int main()
{
	setlocale(LC_ALL, "hun"); //ékezetes karakterek engedélyzése

	bool *exit = new bool;
	*exit = false;
	do
	{
		switch (_getch())//egy darab karakter bekérése 
		{
		case ESC:
			*exit = true;
			break;
		case 49:
			break;
		default:
			system("cls");
			break;
		}
	} while (*exit != true);


	delete exit;
	return 0;
}

