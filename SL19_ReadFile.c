#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void display(int a[][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
			printf("%d ", a[i][j]);
		printf("\n");	
	}
}
int main(){
//	char fName[31]="input.txt";
	char fName[31]="D:\\AA\\input.txt";
	char fName2[31]="output.txt";
	FILE *fIn = NULL, *fOut = NULL;
	fIn = fopen(fName, "r");
	fOut = fopen(fName2, "w");
	
	if (fIn==NULL){
		printf("Find not found %s", fName);
		exit(0);
	}
	if (fOut==NULL){
		printf("Find not found %s", fName2);
		exit(0);
	}	
	int m, n, i, j;
	int a[MAX][MAX];
	fscanf(fIn,"%d%d", &m, &n);
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			fscanf(fIn, "%d", &a[i][j]);
			fprintf(fOut, "%d ", a[i][j]);
		}
		fprintf(fOut, "\n");	
	}
	fprintf(fOut, "Noi dung duoc chen vao cuoi file output.txt");
	
	printf("m = %d; n = %d\n", m, n);
	display(a, m, n);
	fclose(fIn);
	fclose(fOut);	
	
	return 0;
}
