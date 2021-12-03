#pragma once
#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
	string username;
	string password;
public:
	Account();
	Account(string username, string password);

	string getUsername();
	string getPassword();

	void setUsername(string username);
	void setPassword(string password);

	void changePassword();
};

