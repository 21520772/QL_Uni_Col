#include "university-student.h"

UniversityStudent::UniversityStudent(){}

void UniversityStudent::Input() 
{
	Person::Input();

	cout << "Nhap ten luan van: ";
	cin.ignore();
	cin.getline(ThesisName, 50);
	cout << "Nhap diem luan van: ";
	cin >> ThesisScore;

	if (credits >= 170 && gpa >= 5 && ThesisScore >= 5) 
		universityGraduation++;
	
}

double UniversityStudent::getGPA() {

	return gpa;
}

void UniversityStudent::Output() 
{
	Person::Output();
	cout << "\nTen luan van: " << ThesisName;
	cout << "\nDiem luan van: " << ThesisScore;
}