// OOPAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<string>
#include"ticket.h"
#include"show.h"
#include"customer.h"
#includes"showSeat.h"

int main()
{
	string a,
		b,
		c,
		f,
		g,
		h;

	int d;

	double e;

	char ch,
		terminator;

	//objects

	showSheat SEAT;
	customer CUST;
	show SHOW;
	ticket*TICK;

	//getting customers information

	CUST.getLogin();
	CUST.getProfileInfo(f, g, h);

	//display main menu and allow customer to choose option

	system("CLS");

	cout << "\n-------------------------MAIN MENU-----------------------\n" << endl;
	cout << "1. Buy Tickets for upcoming shows" << endl;
	cout << "2. Log out\n" << endl;
	cout << "Please enter a menu choice number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2')
	{
		cin.clear();
		cin.ignore(100, '\n'); //ensure buffer is completely clear
		cout << "Please select a valid menu choice number: ";
		cin.get(ch);

	}
	if (ch == '2')
	{
		return EXIT_SUCCESS;
	}

	do
	{
		SHOW.selectShow(a, b);
		c = SHOW.selectTime();

		do
		{
			cout << "\n Are you happy with your choice(Y=Yes, N=No)?: ";
			cin.get(ch);

		} while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
		cin.get(terminator);
	}
	while (ch == 'N' || ch == 'n');

	//deals with selecting seat and calculating price

	SEAT.initialiseFloorPlan();
	d = SEAT.getNumSeats();
	e = SEAT.getSeatSelection();
}
