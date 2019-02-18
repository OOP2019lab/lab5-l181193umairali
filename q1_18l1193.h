#include<iostream>
using namespace std;
class bankAccount{
	string username;
	int acctnum;
	float balance;
	int numoftransaction;
	int *transaction;
	int limit;
	int balancelimit;
public:
	bankAccount(string name,int acctnum);
	void getbalance();
	void setbalance();
	void print ();
	void withdraw(int amount);
	void deposit(int amount);
	 
};

