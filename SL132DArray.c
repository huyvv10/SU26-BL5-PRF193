#include <stdio.h>
#define MAX 10

void input2DArray(int a[][MAX], int r, int c) {
	int i,j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++) {
			printf("a[%d][%d] = ", i,j);
			scanf("%d", &a[i][j]);
		}
}

void display2DArray(int a[][MAX], int r, int c) {
	int i,j;
	for (i=0; i<r; i++) {
		for (j=0; j<c; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void displayMainDiagonal(int a[][MAX], int r, int c) {
	int i,j, min;
	min = r > c ? c : r;
	for (i=0; i<min; i++)
		printf("%d ", a[i][i]);
	printf("\n");		
}
void getMaxMinTotalMainDiagonal(int a[][MAX], int r, int c) {
	int i,j, minVal,max=a[0][0],min=a[0][0],total=0;
	minVal = r > c ? c : r;
	for (i=0; i<minVal; i++){
		if (a[i][i]>max) max = a[i][i];
		if (a[i][i]<min) min = a[i][i];
		total+=a[i][i];
	}
	printf("%d %d %d",max, min, total);		
}
int main() {
	int m,n;
	int a[MAX][MAX];
	scanf("%d%d", &m, &n);
	input2DArray(a,m,n);
	display2DArray(a,m,n);
	printf("Main diagonal\n");
	displayMainDiagonal(a,m,n);
	getMaxMinTotalMainDiagonal(a,m,n);
	return 0;
}
