#include "StudentList.h"
#include "iomanip"

StudentList::StudentList() {
	size=0;
}
StudentList::~StudentList(){
//	for (int i=0; i<size; i++){
//		Student *d;
//		*d=stdList[i];
//		delete d;
//	}
}

void StudentList::addNewStudent(Student newStudent) {
	if (size==MAX) {
		std::cout<<"The list is full."<<std::endl;
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

