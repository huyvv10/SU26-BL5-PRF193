#include <stdio.h>
#include <string.h>

int main() {
	char S[31], S1[31];

	printf("Input a string: ");
	gets(S);

	strcpy(S1, S);
	strupr(S1);
	printf("S: %s\n", S);
	printf("S1: %s\n", S1);
	printf("Result: ");
	if (strcmp(S, S1)>0)
		printf("S > S1");
	else if (strcmp(S,S1)==0)
		printf("S = S1");
	else
		printf("S < S1");
	return 0;
}
