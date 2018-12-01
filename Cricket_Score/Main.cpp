#include<iostream>
#include<string.h>
#include<conio.h>
#include "File.h"

using namespace std;



int main()
{
	int jb = 0;
	scorecard s1;
	int kb;
	s1.menu();
	do
	{
		cout << "\nEnter the option" << endl;
		cout << "(1) Display batting score \n" << endl << "(2) Display Bowling score \n" << endl << "(3) Update batting score \n" << endl;
		cout << "(4) Update Bowling score \n" << endl;

		cin >> kb;
		switch (kb)
		{
		case 1: s1.displaybat();
			break;
		case 2:s1.displaybowl();
			break;
		case 3:s1.updatebatsman();
			break;
		case 4:s1.updatebowler();
			break;
		default:cout << "Wrong choice";
		}
	} while (jb <= 4);
}