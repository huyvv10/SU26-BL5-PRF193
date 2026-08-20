#include "iostream"
#include "Student.h"
#include "iomanip"
using namespace std;
Student::Student() {
	this->id=0;
	this->name="SV FPT";
	this->age=18;
	this->score=0;
}		//Default constructor

Student::Student(int id, string name, int age, float score) {
	this->id=id;
	this->name=name;
	this->age=age;
	this->score=score;
}
//Student::Student(int id, std::string name, int age, float score)
//		: id(id), name(name), age(age), score(score){}

//Getter/Setter
int Student::getId() const{
	return this->id;	
}
void Student::setName(string newName){
	this->name=newName;
}
std::string Student::getName() const{
	return this->name;
}
void Student::setAge(int newAge){
	this->age=newAge;
}
int Student::getAge() const{
	return this->age;
}
void Student::setScore(float newScore){
	this->score=newScore;
}

float Student::getScore() const{
	return this->score;
}

void Student::inputStd(){
	std::cout<<"Input student"<<endl;
	std::cout<<"Input id: "; cin>>id;
	std::cout<<"Input name: "; getline(cin,name);
	std::cout<<"Input age: "; cin>>age;
	std::cout<<"Input score: "; cin>>score;
	cin.ignore();
}

void Student::display() const{
	cout<<left<<setw(10)<<id
			  <<setw(25)<<name
			  <<setw(8)<<age
		<<right<<setw(10)<<setprecision(2)<<score<<endl;
}

