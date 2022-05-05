#include "college-student.h"

CollegeStudent::CollegeStudent(){}

void CollegeStudent::Input() 
{
	Person::Input();

	cout << "Nhap diem tot nghiep: ";
	cin >> score_gradution;

	if (credits >= 120 && gpa >= 5 && score_gradution >= 5) 
		collegeGraduation++;
	
}

double CollegeStudent::getGPA() 
{
	return gpa;
}

void CollegeStudent::Output() 
{
	Person::Output();
	cout << "\nDiem tot nghiep: " << score_gradution;
}