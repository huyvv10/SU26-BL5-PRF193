#pragma once
#include "Student.h"
#define MAX 100

class StudentList{
	private:
		Student stdList[MAX];
		int size;
	public:
		StudentList();
		~StudentList();
		void addNewStudent(Student std);
		void displayStudentList() const;
};