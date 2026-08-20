#include <stdio.h>
#define MAX 31

int main(){
	char S[MAX];
	char S1[MAX] = "FPT University";
	
	printf("%s\n", S);
	printf("%s\n", S1);
	
	printf("Input a string C1: "); scanf("%s", &S);
	printf("Inputed string: %s\n", S);
	
	fflush(stdin);	//Clear buffer
	printf("Input a string C2: "); scanf("%[^\n]", &S);
	printf("Inputed string C2: %s\n", S);
	
	fflush(stdin);	//Clear buffer	
	printf("Input a string C3: "); 
	gets(S);
	printf("Inputed string C2: ");
	puts(S);
	
	printf("Input new string C4: "); scanf("%[abcd]", &S);
	puts(S);
	printf("Input new string C5: "); scanf("%5[abcd]", &S);
	puts(S);
	printf("Input phone number C6: "); scanf("%10[0-9]", &S);
	puts(S);
	printf("Input phone number C7: "); scanf("%[a-zA-Z0-9 ]", &S);
	puts(S);
	return 0;
}
