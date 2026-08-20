#include <iostream>
#include "StudentList.h"
#include "iomanip"
using namespace std;

StudentList::StudentList() {
	size=0;
}
StudentList::~StudentList(){}

void StudentList::addNewStudent(Student newStudent) {
	if (size==MAX) {
		cout<<"The list is full."<<endl;
		return;
	}
	stdList[size]=newStudent;
	size++;
}

void StudentList::displayStudentList() const{
	cout<<left<<setw(10)<<"ID"
			  <<setw(25)<<"Name"
			  <<setw(8)<<"Age"
		<<right<<setw(10)<<"Score"<<endl;	
	
	for (int i=0; i<size; i++)
		stdList[i].display();
}

