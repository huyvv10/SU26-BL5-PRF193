#include <stdio.h>
#include <string.h>

int main(){
	char S1[31]="FPT University", S2[31];
	int n = strlen(S1);
	printf("The length of S1: %d\n", n); 
	int i;
	for (i=n-1; i>=0; i--)
		printf("%c", S1[i]);
	return 0;
}
