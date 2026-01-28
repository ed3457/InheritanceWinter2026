#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string name;
	string ssn;
	string address;

public: 
	void setName(string n);
	string getName();

	void setSSN(string s);
	string getSSN();

	void setAddress(string a);
	string getAddress();

	void printInfo();

	Person(); 
	Person(string n, string s, string a);

};

