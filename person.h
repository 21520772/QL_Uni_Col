#pragma once
#include <iostream>
using namespace std;

class Person 
{
	protected:

		char ID[10];
		char fullName[50];
		char address[50];
		int credits;
		double gpa;

	public:

		virtual void Input();
		virtual double getGPA();
		virtual void Output();
};