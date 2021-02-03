#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>
using namespace std;
class Account
{
	string name;
	string fatherName;
	string password;
	int balance;
public:
	Account(string n, string fn, string p, int b);
	string getName();
	void setName(string n);
	void setFatherName(string fn);
	string getFatherName();
	int getbalance();
	bool deposite(int b);
	bool withdraw(int b);
	bool setPassword(string p);
	string getPassword();
};
#endif // !ACCOUNT_H
