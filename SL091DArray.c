#include <stdio.h>

void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}
int main(){
	//Cach 1: Vua khai bao vua khoi tao mang
	int arr1[] = {5, 8, 9, 2, 4, 7, 3};
	
	int n=1;
	printf("Input number elements: "); scanf("%d", &n);
	//Cach 2: 
	int arr2[n];

	display(arr1,7);
	display(arr2,n);
	return 0;
}
