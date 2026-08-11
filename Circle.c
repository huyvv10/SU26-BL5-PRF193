#include <stdio.h>
#define PI 3.14159

int main(){
	float r;	
	printf("Input r = ");
	scanf("%f", &r);
	r = r>=0 ? r : -r;
	
	printf("Chu vi: %.2f", 2*PI*r);
	return 0;
}
