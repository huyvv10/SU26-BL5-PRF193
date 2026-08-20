#include <stdio.h>
#include <string.h>

int main(){
	char S[31], S1[31];
	
	printf("Input a string: ");
	gets(S);
	
	strcpy(S1, S);
	printf("Result: ");
	strupr(S1);
	puts(S1);
	puts(S);
	return 0;
}
