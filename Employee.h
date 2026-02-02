#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	string position;
	float salary;
public:

	void setPosition(string p);

	string getPosition();

	void setSalary(float s);

	float getSalary();

	void printInfo();// override 
	Employee();
	Employee(string n, string sn, string ad, string p, float sal);


};

