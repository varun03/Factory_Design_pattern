// factory_design.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "factory_design.h"
#include <iostream>
using namespace std;

void Tringale::darw()
{
	cout << "hey My shape is tringale \n" ;
	cout << endl ;
}

void circle::darw()
{
	cout << "hey My shape is circle \n" ;
	cout << endl ;
}

void rectangle::darw()
{
	cout << "hey My shape is rectangle \n" ;
	cout << endl ;
}

shape *Getshapeobj::getshapeobject(int shapetype)
{
	switch (shapetype)
	{

	case  1:
		return new Tringale();
		break;

	case  2:
		return new circle();
		break;

	case  3:
		return new rectangle();
		break;

	default:
		cout << " Wrong shapetype input Provided" ;
		return NULL;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{

	Getshapeobj oject;

	shape * objecShape;

    int typeahpe ; 
	static int  tochek;
	static bool check = true;
	while(check)
	{

		cout << "input the sape type 1 ->for Tringle , 2 -> for Circle , 3-> Rectangle";
		cout << endl;

		cin>> typeahpe;

		objecShape = oject.getshapeobject(typeahpe);
		if(objecShape != NULL)
		objecShape->darw();

		cout << " Press 1 for continue or press any key to exit :)" ;

		cin >> tochek;

		if(tochek == 1)
		{
			check = true;
			tochek = 0;
		}
		else 
			check = false;
	}

	return 0;
}

