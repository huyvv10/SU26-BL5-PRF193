#include <stdio.h>

int main(){
	float math, phy, che, gpa, cond;
	
	printf("Input your math: "); scanf("%f", &math);
	printf("Input your physical: "); scanf("%f", &phy);
	printf("Input your chemical: "); scanf("%f", &che);
	
	gpa = (math+phy+che)/3;
	
	if (gpa>=9)
		printf("%.2f: Excellence.\n", gpa);
	else if (gpa>=8)
		printf("%.2f: Good.\n", gpa);
	else if (gpa>=7)
		printf("%.2f: Well.\n", gpa);
	else if (gpa>=5)
		printf("%.2f: Fair.\n", gpa);
	else
		printf("%.2f: Poor.\n", gpa);

	return 0;
}
