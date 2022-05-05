#pragma once
#include "person.h"

class UniversityStudent: public Person 
{
	protected:

		char ThesisName[50];
		double ThesisScore;

	public:

		static int universityGraduation;
		UniversityStudent();

		void Input();
		double getGPA();
		void Output();
};