#include "Header.h"
int main()
{
	// реализовать работу с класом Студент
	Student student;
	student.setName("Ivan");
	student.setSurname("Ivanov");
	student.setPatronymic("Ivanovich");
	student.setDateOfBirth("01.01.2000");
	student.setPhoneNumber("123456789");
	student.setCity("Kiev");
	student.setCountry("Ukraina");
	student.setUniversity("KPI");
	student.setUniversityPlace("Kiev");
	student.setUniversityCountry("Ukraina");
	student.setGroupNumber("123");
	cout << student.getName() << endl;
	cout << student.getSurname() << endl;
	cout << student.getPatronymic() << endl;
	cout << student.getDateOfBirth() << endl;
	cout << student.getPhoneNumber() << endl;
	cout << student.getCity() << endl;
	cout << student.getCountry() << endl;
	cout << student.getUniversity() << endl;
	cout << student.getUniversityPlace() << endl;
	cout << student.getUniversityCountry() << endl;
	cout << student.getGroupNumber() << endl;
	return 0;
	student.~Student();
}