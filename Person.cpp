#include "Person.h"
#include <iostream>
using namespace std; 
void Person::setName(string n)
{
	name = n;
}
string Person::getName()
{
	return name;
}

void Person::setSSN(string s)
{
	ssn = s;
}

string Person::getSSN()
{
	return ssn;
}

void Person::setAddress(string a)
{
	address = a;
}

string Person::getAddress()
{
	return address;
}

void Person::printInfo()
{
	cout << "Name: " << getName() << endl;
	cout << "SSN: " << getSSN() << endl;
	cout << "Address: " << getAddress() << endl;
}

Person::Person()
{
	setName("Not set yet");
	setSSN("Not set yet");
	setAddress("Not set yet");
}

Person::Person(string n, string s, string a)
{
	setName(n);
	setSSN(s);
	setAddress(a);

}