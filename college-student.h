#pragma once
#include "person.h"

class CollegeStudent: public Person
{
	protected:

		double score_gradution;

	public:

		static int collegeGraduation;
		CollegeStudent();

		void Input();
		double getGPA();
		void Output();
};