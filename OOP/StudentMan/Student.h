#pragma once
#include <iostream>
using namespace std;
class Student{
	private:
		int id;
		string name;
		int age;
		float score;
	public:	
		Student();		//Default constructor
		Student(int id, string name, int age, float score);
		
		//Getter/Setter
		int getId() const;
		void setName(string newName);
		string getName() const;
		void setAge(int newAge);
		int getAge() const;
		void setScore(float newScore);
		float getScore() const;
			
		void inputStd();
		void display() const;
		float getAverageScore() const;
};


