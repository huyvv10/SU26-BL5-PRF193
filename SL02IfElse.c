#include <stdio.h>

int main(){
	int age;
	printf("Input your age: ");
	scanf("%d", &age);
	
	if (age>=18)
		printf("You can get married.");
	else
		printf("Be careful.")	;
	
		
	return 0;
}
