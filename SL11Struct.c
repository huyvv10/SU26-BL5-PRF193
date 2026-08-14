#include <stdio.h>
#include <string.h>

typedef struct {
	char id[9];
	char name[31];
	int age;
	float grade;
} Student;

void display(Student s) {
	printf("%-13s %-25s %-5d %8.2f\n", s.id, s.name, s.age, s.grade);
}

void inputStudentList(Student std[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("\nInput student %d\n", i+1);
		fflush(stdin);
		printf("Input id: ");
		gets(std[i].id);
		fflush(stdin);
		printf("Input name: ");
		gets(std[i].name);
		printf("Input age: ");
		scanf("%d", &std[i].age);
		printf("Input grade: ");
		scanf("%f", &std[i].grade);
	}
}

void displayList(Student std[], int n) {
	int i;
	for (i=0; i<n; i++)
		display(std[i]);
}
void title() {
	printf("%-13s %-25s %-5s %8s\n", "ID", "NAME", "AGE", "GRADE");
	printf("%-13s %-25s %-5s %8s\n", "--", "----", "---", "-----");
}
int main() {
	Student sv1;
	strcpy(sv1.id,"He200001");
	strcpy(sv1.name, "Vu Van Huy");
	sv1.age=19;
	sv1.grade=8.5;
	title();
	display(sv1);

	Student sv2 = {"He210001", "Nguyen Tung Chi", 20, 9.0};
	display(sv2);

	Student std[2];
	inputStudentList(std, 2);
	title();
	displayList(std, 2);
	return 0;
}
