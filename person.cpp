#include "person.h"

void Person::Input() 
{
	cout << "Nhap ID: ";
	cin.ignore();
	cin.getline(ID, 10);
	cout << "Nhap ho ten: ";
	cin.getline(fullName, 50);
	cout << "Nhap dia chi: ";
	cin.getline(address, 50);
	cout << "Nhap tong so tin chi: ";
	cin >> credits;
	cout << "Nhap GPA: ";
	cin >> gpa;
}

double Person::getGPA() 
{
	return -1;
}

void Person::Output() 
{
	cout << "\nID: " << ID;
	cout << "\nHo ten: " << fullName;
	cout << "\nDia chi: " << address;
	cout << "\nTong tin chi: " << credits;
	cout << "\nGPA: " << gpa;
}