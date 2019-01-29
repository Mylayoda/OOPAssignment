#pragma once
#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>

using namespace std;

class customer
{
	public:
		customer();
		~customer();
		void getLogin();
		void getProfileInfo(string &fName, string &sName, string &address);
		void getPaymentInfo();

	protected:
		string fName;
		string sName;
		string address;
};
customer::customer() // constructor
{
	fName = "";
	sName = "";
	address = "";
}

//destructor

customer::~customer()
{

}

//login
void customer::getLogin()
{
	string username;
	string Password;
	cout << "\n-------------------------Log In-----------------------\n" << endl;
	cout << "\n Welcome to the Bucks centre for the performing Arts ticket purchasing system" << endl;

	cout << "Please login" << endl;
	cout << "Enter Username: ";
	getline(cin, username);
	while (username.length() > 10)

	{
		cout << " Your username should not be 10 charachters long." << endl;
		cout << " please re-enter your username: ";
		getline(cin, username);
	}

	cout << " Enter Password: ";
	getline(cin, Password);

	while (Password.length() > 10)
	{
		cout << " Your password should be no more than 10 characters long." << endl;
		cout << " please re-enter your Password: ";
	}

}
void customer::getProfileInfo(string &fName, string &sName, string &address)
{
	//continue code
}

