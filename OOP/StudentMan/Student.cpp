#include <iostream>
#include <iomanip>
#include "Student.h"

using namespace std;

Student::Student() {
	this->id = 0;
	this->name = "SV FPT";
	this->age = 18;
	this->score = 0;
}

Student::Student(int _id, string _name, int _age, float _score)
	: id(_id), name(_name), age(_age), score(_score) {}

int Student::getId() const {
	return this->id;
}
void Student::setName(string newName) {
	this->name = newName;
}
string Student::getName() const {
	return this->name;
}
void Student::setAge(int newAge) {
	this->age = newAge;
}
int Student::getAge() const {
	return this->age;
}
void Student::setScore(float newScore) {
	this->score = newScore;
}
float Student::getScore() const {
	return this->score;
}

void Student::inputStd() {
	cout << "Input student" << endl;
	cout << "Input id: ";
	cin >> id;
	cin.ignore();
	cout << "Input name: ";
	getline(cin, name);
	cout << "Input age: ";
	cin >> age;
	cout << "Input score: ";
	cin >> score;
}

void Student::display() const {
	cout << left << setw(10) << id
	     << setw(25) << name
	     << setw(8) << age
	     << right << setw(10) << fixed << setprecision(2) << score << endl;
}