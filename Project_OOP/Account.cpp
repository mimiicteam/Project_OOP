#include "Account.h"

Account::Account()
{
	this->username = "";
	this->password = "";
}

Account::Account(string username, string password)
{
	this->username = username;
	this->password = password;
}

string Account::getUsername()
{
	return this->username;
}

string Account::getPassword()
{
	return this->password;
}

void Account::setUsername(string username)
{
	this->username = username;
}

void Account::setPassword(string password)
{
	this->password = password;
}

void Account::changePassword()
{
	//CODE
}
