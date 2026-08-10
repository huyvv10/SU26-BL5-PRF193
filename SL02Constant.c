#include <stdio.h>
#define PI 3.14159

int main(){
	const float pi = 3.14159;
	float r = 5.0;
	printf("Chu vi hinh tron: %.2f", 2*pi*r);
	printf("\nDien tich hinh tron: %.2f", PI*r*r);
	return 0;
}
