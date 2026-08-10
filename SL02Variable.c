#include <stdio.h>

int main(){
	char c1 = 'F';
	printf("%c\n", c1);
	
	int n = 7;
	printf("%d\n", n);
	
	float vf = 8.5F;
	printf("%f\n", vf);
	printf("%.2f\n", vf);
	
	double vd = 9.5;
	printf("%lf\n", vd);
	printf("%.1lf", vd);
	return 0;
}
