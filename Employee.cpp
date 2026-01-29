#include "Employee.h"
#include <iostream>
using namespace std; 

void Employee::setPosition(string p)
{
	position = p;
}

string Employee::getPosition()
{
	return position;
}

void Employee::setSalary(float sal)
{
	salary = sal;
}
float Employee::getSalary()
{
	return salary;
}

void Employee::printInfo()
{
	Person::printInfo();// use code from the base class 

	cout << "Position: " << getPosition() << endl;
	cout << "Salary: " << getSalary() << endl;

}


