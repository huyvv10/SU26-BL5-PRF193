#include <stdio.h>
#include <string.h>
#define MAX 31

void inputArrOfString(char S[][MAX], int n){
	int i;
	for (i=0; i<n; i++){
		printf("Input S[%d] = ", i+1);
		gets(S[i]);
	}
}

void display(char S[][MAX], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%s ", S[i]);
	printf("\n");	
}

void sortStringAsc(char S[][MAX], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
//			if (S[j-1]>S[j] )	//Khong so sanh theo kieu cua du lieu kieu so
			if (strcmp(S[j-1], S[j])>0){
				char tmp[MAX];
				strcpy(tmp,S[j]); strcpy(S[j], S[j-1]); strcpy(S[j-1], tmp);
			}
}
void sortStringDesc(char S[][MAX], int n){
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=i+1; j<n; j++)
			if (strcmp(S[i], S[j])<0){
				char tmp[MAX];
				strcpy(tmp,S[j]); strcpy(S[j], S[i]); strcpy(S[i], tmp);
			}
}

void searching(char S[][MAX], int n, char kw[MAX]){
	int i, pos=-1;
	for (i=0; i<n; i++){
		if (strstr(S[i], kw)!=NULL){
			pos=i; break;
		}
	}
	if (pos!=-1){
		printf("%s is existing in the array", S[pos]);
	} else
		printf("Find not found %s in the array.", kw);
}
int main(){
	int n;
	scanf("%d", &n);
	fflush(stdin);	//Clear buffer
	char S[n][MAX];
	inputArrOfString(S, n);
	display(S,n);
	printf("String after sorting\n");
	sortStringAsc(S,n);
	display(S,n);
	printf("String after sorting\n");
	sortStringDesc(S,n);
	display(S,n);
	char kw[MAX];
	printf("\nInput searching name: "); gets(kw);
	searching(S, n, kw); 	
	return 0;
}
