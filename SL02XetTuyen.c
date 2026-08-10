#include <stdio.h>

int main(){
	float math, phy, che, gpa, cond;
	
	printf("Input your math: "); scanf("%f", &math);
	printf("Input your physical: "); scanf("%f", &phy);
	printf("Input your chemical: "); scanf("%f", &che);
	printf("Input pass condition: "); scanf("%f", &cond);
	
	gpa = (math+phy+che)/3;
	
	if (gpa>=cond){
		printf("GPA: %.2f >= %.2f", gpa, cond);
		printf("\nPass");
	}else {
		printf("GPA: %.2f < %.2f", gpa, cond);
		printf("\nFail");
	}
	
	return 0;
}
