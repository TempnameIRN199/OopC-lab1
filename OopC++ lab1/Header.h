#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;

class Student {
private:
	string name;
	string surname;
	string patronymic;
	string dateOfBirth;
	string phoneNumber;
	string city;
	string country;
	string university;
	string universityPlace;
	string universityCountry;
	string groupNumber;
public:
	Student(); // êîíñòðóêòîð ïî óìîë÷àíèþ
	Student(string name, string surname, string patronymic, string dateOfBirth, string phoneNumber, string city, string country, string university, string universityPlace, string universityCountry, string groupNumber); // êîíñòðóêòîð ñ ïàðàìåòðàìè
	~Student(); // äåñòðóêòîð
	void setName(string name); 
	void setSurname(string surname);
	void setPatronymic(string patronymic);
	void setDateOfBirth(string dateOfBirth);
	void setPhoneNumber(string phoneNumber);
	void setCity(string city);
	void setCountry(string country);
	void setUniversity(string university);
	void setUniversityPlace(string universityPlace);
	void setUniversityCountry(string universityCountry);
	void setGroupNumber(string groupNumber);
	string getName(); // àêñåññîðû
	string getSurname();
	string getPatronymic();
	string getDateOfBirth();
	string getPhoneNumber();
	string getCity();
	string getCountry();
	string getUniversity();
	string getUniversityPlace();
	string getUniversityCountry();
	string getGroupNumber();
	void input();
	void output();
};
