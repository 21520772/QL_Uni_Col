#include "person.h"
#include "university-student.h"
#include "college-student.h"
#define MAX 100

int CollegeStudent::collegeGraduation = 0;
int UniversityStudent::universityGraduation = 0;

int main() 
{
	Person* arr[MAX];
	int n, option = 0;


	//3. Max GPA
	double maxCollegeGPA = 0, maxUniversityGPA = 0;
	int maxCollegeIndex = -1, maxUniversityIndex = -1;
	
	
	//1. Input data
	do 
	{
		cout << "\nNhap so luong sinh vien: ";
		cin >> n;
		if (n == 0) 
		{
			cout << "Program finished!";
			break;
		}
		else 
		{
			for (int i = 0; i < n; i++) 
			{
				cout << "\nChon he dao tao: ";
				cout << "\nNhap thong tin sinh vien thu " << i + 1 << " :";
				do 
				{
					cout << "\n1. Cao Dang";
					cout << "\n2. Dai hoc";
					cout << "\n0. Cancel" << endl;
					cin >> option;
					if (option == 0) 
						break;
			
					else if (option != 1 && option != 2 && option != 0) 
						cout << "\nError!!! Please try again!";
					
				} while (option != 1 && option != 2 && option != 0);

				if (n != 0) 
				{
					switch (option) 
					{
					case 1:
						arr[i] = new CollegeStudent;
						(*arr[i]).Input();
						//3. Max GPA - College Students
						if (arr[i]->getGPA() > maxCollegeGPA) 
						{
							maxCollegeGPA = arr[i]->getGPA();
							maxCollegeIndex = i;
						}
						break;
					case 2:
						arr[i] = new UniversityStudent;
						(*arr[i]).Input();
						
						//3. Max GPA - University Students
						if (arr[i]->getGPA() > maxUniversityGPA) 
						{
							maxUniversityGPA = arr[i]->getGPA();
							maxUniversityIndex = i;
						}
					default:
						break;
					}
				}
			}
		}
	} while (n <= 0);


	//2. So luong tot nghiep

	cout << "\nSo luong sinh vien he Cao Dang tot nghiep: " << CollegeStudent::collegeGraduation;
	cout << "\nSo luong sinh vien he Dai Hoc tot nghiep: " << UniversityStudent::universityGraduation;
	cout << endl;
	cout << "\nDiem trung binh cao nhat - Cao Dang " << maxCollegeIndex + 1 << " :";
	arr[maxCollegeIndex]->Output();
	cout << "\nDiem trung binh cao nhat - Dai Hoc  " << maxUniversityIndex + 1 << " :";
	arr[maxUniversityIndex]->Output();
	return 0;
}