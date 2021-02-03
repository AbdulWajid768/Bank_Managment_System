#include "Account.h"
Account::Account(string n, string fn, string p, int b)
{
	name = n;
	fatherName = fn;
	password = p;
	if (b > 0)
	{
		balance = b;
	}
	else
	{
		balance = 0;
	}
}
string Account::getName()
{
	return name;
}
void Account::setName(string n)
{
	name = n;
}
void Account::setFatherName(string fn)
{
	fatherName = fn;
}
string Account::getFatherName()
{
	return fatherName;
}
int Account::getbalance()
{
	return balance;
}
bool Account::deposite(int b)
{
	if (b < 0 || b>100000)
	{
		cout << "->Illegal Amount Entered\n";
		return false;
	}
	else
	{
		balance = balance + b;
		return true;
	}
}
bool Account::withdraw(int b)
{
	if (balance >= b)
	{
		balance = balance - b;
		return true;
	}
	else
	{
		cout << "->Not Enough Amount in Account\n";
		return false;
	}
}
bool Account::setPassword(string p)
{
	if (p.length() > 10 || p.length() <= 0)
	{
		cout << "->Invalid Password Intered.\n";
		return false;
	}
	else
	{
		password = p;
		return true;
	}
}

string Account::getPassword()
{
	return password;
}
