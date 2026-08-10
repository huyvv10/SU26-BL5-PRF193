#include <stdio.h>

int main(){
	char c1;
	int n;
	float vf;
	double vd;
	printf("Input a character: ");
	scanf("%c",&c1); 
	printf("%c\n", c1);
	fflush(stdin);	//clear buffer
//	getchar();	//
	printf("Input an integer number: ");
	scanf("%d", &n);
	printf("n = %d\n", n);
	
	printf("Input your gpa: ");
	scanf("%f", &vf);
	printf("GPA = %.2f\n", vf);
	
	printf("Input your salary: ");
	scanf("%lf", &vd);
	printf("Salary = %.1lf", vd);
	return 0;
}
