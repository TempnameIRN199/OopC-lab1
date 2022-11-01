#include "Header.h"
void Student::setName(string name) {
	this->name = name;
}
void Student::setSurname(string surname) {
	this->surname = surname;
}
void Student::setPatronymic(string patronymic) {
	this->patronymic = patronymic;
}
void Student::setDateOfBirth(string dateOfBirth) {
	this->dateOfBirth = dateOfBirth;
}
void Student::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}
void Student::setCity(string city) {
	this->city = city;
}
void Student::setCountry(string country) {
	this->country = country;
}
void Student::setUniversity(string university) {
	this->university = university;
}
void Student::setUniversityPlace(string universityPlace) {
	this->universityPlace = universityPlace;
}
void Student::setUniversityCountry(string universityCountry) {
	this->universityCountry = universityCountry;
}
void Student::setGroupNumber(string groupNumber) {
	this->groupNumber = groupNumber;
}
string Student::getName() {
	return name;
}
string Student::getSurname() {
	return surname;
}
string Student::getPatronymic() {
	return patronymic;
}
string Student::getDateOfBirth() {
	return dateOfBirth;
}
string Student::getPhoneNumber() {
	return phoneNumber;
}
string Student::getCity() {
	return city;
}
string Student::getCountry() {
	return country;
}
string Student::getUniversity() {
	return university;
}
string Student::getUniversityPlace() {
	return universityPlace;
}
string Student::getUniversityCountry() {
	return universityCountry;
}
string Student::getGroupNumber() {
	return groupNumber;
}
Student::Student() {
	name = " ";
	surname = " ";
	patronymic = " ";
	dateOfBirth = " ";
	phoneNumber = " ";
	city = " ";
	country = " ";
	university = " ";
	universityPlace = " ";
	universityCountry = " ";
	groupNumber = " ";
}
Student::Student(string name, string surname, string patronymic, string dateOfBirth, string phoneNumber, string city, string country, string university, string universityPlace, string universityCountry, string groupNumber) {
	this->name = name;
	this->surname = surname;
	this->patronymic = patronymic;
	this->dateOfBirth = dateOfBirth;
	this->phoneNumber = phoneNumber;
	this->city = city;
	this->country = country;
	this->university = university;
	this->universityPlace = universityPlace;
	this->universityCountry = universityCountry;
	this->groupNumber = groupNumber;
}
void Student::input() {
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter patronymic: ";
	cin >> patronymic;
	cout << "Enter date of birth: ";
	cin >> dateOfBirth;
	cout << "Enter phone number: ";
	cin >> phoneNumber;
	cout << "Enter city: ";
	cin >> city;
	cout << "Enter country: ";
	cin >> country;
	cout << "Enter university: ";
	cin >> university;
	cout << "Enter university place: ";
	cin >> universityPlace;
	cout << "Enter university country: ";
	cin >> universityCountry;
	cout << "Enter group number: ";
	cin >> groupNumber;
}
void Student::output() {
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Patronymic: " << patronymic << endl;
	cout << "Date of birth: " << dateOfBirth << endl;
	cout << "Phone number: " << phoneNumber << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "University: " << university << endl;
	cout << "University place: " << universityPlace << endl;
	cout << "University country: " << universityCountry << endl;
	cout << "Group number: " << groupNumber << endl;
}
Student::~Student() {
	cout << "Destructor is called" << endl;
}