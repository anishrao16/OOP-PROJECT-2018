#include "File.h"
#include<iostream>
using namespace std;

void scorecard::updatebowler(void)
{
	char bowlname[20];
	int str, k, option, overnumbers, maidenumb, uprun, upwicket;
	getchar();

	cout << "Enter Bowler name:";
	cin.getline(bowlname, 20);
	for (k = 0;k < 11;k++)
	{
		str = strcmp(bowlername[k], bowlname);
		if (str == 0)
		{
			cout << "Menu for Bowler information update " << endl;
			cout << "(1) Update Number of overs" << endl << "(2) Update maiden overs" << endl << "(3) Update runs given" << endl;
			cout << "(4) Update wickets taken" << endl;
			cin >> option;
			switch (option)
			{
			case 1: {cout << "Enter Numbers of overs to be updated:";
				cin >> overnumbers;
				cout << endl;
				oversplayed[k] += overnumbers;
				break;
			}
			case 2: {cout << "Enter the number of maiden overs to be updated:";
				cin >> maidenumb;
				cout << endl;
				maiden[k] += maidenumb;
				break;
			}
			case 3: {cout << "Enter the number of runs to be added:";
				cin >> uprun;
				cout << endl;
				runsgiven[k] += uprun;
				break;

			}
			case 4: {cout << "Enter number of wickets to be updated:";
				cin >> upwicket;
				cout << endl;
				wicketstaken[k] += upwicket;
				break;
			}
			default:cout << "wroung choice";

			}
			
		}



	}
	if (str != 0)
		cout << "You entered wrong player." << endl;

}



void scorecard::updatebatsman(void)
{
	getchar();
	char batsmaname[20];
	int str, k;
	cout << "Enter Batsman name:";
	cin.getline(batsmaname, 20);
	for (k = 0;k < 11;k++)
	{
		str = strcmp(batname[k], batsmaname);
		if (str == 0)
		{
			cout << "enter runs scored:";
			cin >> runscored[k];

			cout << endl << "enter weather out or not out:";
			cin >> situation[k];
			cout << endl << "enter mode(if batsman out) by which batsman was out:";
			cin >> mode[k];
			break;
		}



	}
	if (str != 0)
		cout << "You entered wrong player." << endl;

}
void scorecard::displaybat(void)
{
	getchar();

	for (int j = 0;j < 11;j++)
	{
		cout << "name" << "Runs" << "situation" << "mode" << endl;
		cout << endl;
		cout << batname[j] << '\t' << runscored[j] << '\t' << situation[j] << '\t' << mode[j] << endl;
	}
}
void scorecard::displaybowl(void)
{
	getchar();
	for (int j = 0;j < 11;j++)
	{
		cout << "name" << "played" << "maiden overs" << "wicket taken" << endl;
		cout << bowlername[j] << '\t' << oversplayed[j] << '\t' << maiden[j] << '\t' << wicketstaken[j] << endl;
	}
}
void scorecard::menu(void)

{
	cout << "Enter the name of players of batting team" << endl;
	for (int k = 0;k < 11;k++)
	{

		cout << "Enter name of player " << k + 1 << ":";
		cin >> batname[k];
	}
	cout << "Enter the name of players of bowling team" << endl;
	for (int n = 0;n < 11;n++)
	{

		cout << "Enter name of player " << n + 1 << ":";
		cin >> bowlername[n];
	}
}
