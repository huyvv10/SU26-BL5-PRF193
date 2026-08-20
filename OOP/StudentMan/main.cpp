#include <iostream>
#include "StudentList.h"

using namespace std;

int main(){
	StudentList stdLst;
	stdLst.addNewStudent(Student(1,"Huy", 18, 8.5));
	stdLst.addNewStudent(Student(2,"Yen", 21, 7.0));
	stdLst.addNewStudent(Student(3,"Hung", 18, 9.5));
	stdLst.addNewStudent(Student(4,"Mai", 19, 7.5));
	stdLst.displayStudentList();
	return 0;
}
