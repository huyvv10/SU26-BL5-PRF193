#include <stdio.h>


int main(){
//	char fName[31] = "D:\\AA\\abc.txt";
	char fName[31] = "D:\\carinput.txt";
	FILE *fIn = fopen(fName,"r");
	FILE *fO = fopen("file2.txt", "w");
	char vC;
//	do{
//		vC=fgetc(fIn);
//		printf("%c", vC);
//	} while (vC!=EOF);
	
	while ((vC=fgetc(fIn))!=EOF){
		printf("%c", vC);
		fputc(vC, fO);
	}
	
	fclose(fIn); fclose(fO);
	return 0;
}
