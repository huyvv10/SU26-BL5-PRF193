#include <stdio.h>

int sum(int a, int b){
	printf("Before: a = %d, b = %d\n", a, b);
	a=2*a; b=2*b;
	printf("After: a = %d, b = %d\n", a, b);	
}
int sum2(int *a, int *b){
	printf("Before: a = %d, b = %d\n", *a, *b);
	*a=*a*2; *b=2**b;
	printf("After: a = %d, b = %d\n", *a, *b);	
}
int main(){
	int a = 5, b = 7; 
	printf("Before in main: a = %d, b = %d\n", a, b);
	printf("Result: %d\n", sum(a,b));
	printf("After in main: a = %d, b = %d\n\n", a, b);
		
	printf("Before in main: a = %d, b = %d\n", a, b);
	printf("Result: %d\n", sum2(&a,&b));
	printf("After in main: a = %d, b = %d", a, b);		
	return 0;
}
