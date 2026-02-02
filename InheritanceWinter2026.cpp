// InheritanceWinter2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Employee.h"
using namespace std;
int main()
{
	/*Person obj1("James Bond","007-007-00007","SkyFall");
	
	obj1.printInfo();

	Person person1;

	person1.printInfo();*/

	Employee emp1("James Khan","599-45-3323", "Detroit", "Sr. Manager",100000);

	/*emp1.setName("James Khan");
	emp1.setAddress("Detroit");
	emp1.setPosition("Sr. Manager");
	emp1.setSalary(100000);
	emp1.setSSN("599-45-3323");*/

	emp1.printInfo();

	Employee emp2;

	emp2.printInfo();
}

