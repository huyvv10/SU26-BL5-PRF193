#include <stdio.h>
#include <string.h>
#include <ctype.h>


void optimizeName(char S[]){
	int i, n=strlen(S);
	strlwr(S);
	for (i=0; i<n; i++)
		if (i==0 || S[i-1]==' ') S[i]=toupper(S[i]);
	puts(S);	
}

char * lTrim(char s[]){
	int i=0;
	while (s[i]==' ')i++;
	if (i>0)strcpy(&s[0], &s[i]);
	return s;
}

char * rTrim(char s[]){
	int i=strlen(s)-1;
	while (s[i]==' ')i--;
	s[i+1]='\0';
	return s;
}

char* trim(char s[]){
	rTrim(lTrim(s));
	char *ptr=strstr(s," ");
	while (ptr!=NULL){
		strcpy(ptr,ptr+1);
		ptr=strstr(s,"  ");
	}
	return s;
}
int main(){
	char S[31] ="vU VAn hUy";
	
	printf("Input your name: "); gets(S);
	optimizeName(trim(S));
	return 0;
}
