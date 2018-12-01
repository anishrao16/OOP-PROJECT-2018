#pragma once

class scorecard {
	char batname[11][20];
	int runscored[11];
	char situation[11][10];
	char mode[11][15];
	char bowlername[11][20];
	float oversplayed[11];
	int maiden[11];
	int runsgiven[11];
	int wicketstaken[11];
public:

	void updatebatsman(void);
	void updatebowler(void);
	void displaybat(void);
	void displaybowl(void);
	void menu(void);
	scorecard()
	{
		for (int n = 0;n < 12;n++)
		{

			runscored[n] = { 0 };
			oversplayed[n] = { 0 };
			maiden[n] = { 0 };
			runsgiven[n] = { 0 };
			wicketstaken[n] = { 0 };
		}
	}
};