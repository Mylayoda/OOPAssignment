#pragma once
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class show
{
	public:
		show();
		~show();
		void selectShow(string & showName, string & showDate);
		string selectTime();

	protected:
		string showName;
		string showDate;
		string showTime;
};

show::show() // constructor
{
	 showName ="";
	 showDate = "";
	 showTime = "";
}

//destructor

show::~show()
{

}

void show::selectShow(string & showName, string & showDate)
{
	char ch;
	char terminator;
	system("CLS");
	cout << "\n-------------------------SELECT UPCOMING SHOW-----------------------\n" << endl;
	cout << "1. Star Wars: The musical  (20/05/2013)" << endl;
	cout << "2. Les Miserable (21/05/2013)" << endl;
	cout << "3. THe phantom of the Opera ()22/05/2013"<< endl;

	cin.clear();
	cin.ignore(100, '\n'); //ensure buffer is completely clear
	cout << "Please select a show number: ";
	cin.get(ch);
	while (ch != '1' && ch != '2'&& ch != '3')
	{
		cin.clear();
		cin.ignore(100, '\n'); //ensure buffer is completely clear
		cout << "Please select a valid show number: ";
		cin.get(ch);
	}
	switch (ch)
	{
	case'1':showName = "Star Wars: The Musical", showDate = "20/05/2013";
		break;
	case'2':showName = "Les Miserable", showDate = "21/05/2013";
		break;
	case'3':showName = "The Phantom of Opera", showDate = "22/05/2013";
		break;
	}

	this->showName = showName;
	this->showDate = showDate; // enter reference variable into class variable

	cin.get(terminator); // clears buffer
}

// customer selects 1pm/7pm showing

string show::selectTime()
{

}
//continue