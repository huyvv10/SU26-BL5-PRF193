#include <stdio.h>
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}
void displayReverse(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ", a[i]);
	printf("\n");	
}

void inputArr(int a[], int n){
	int i;
	for (i=0; i<n; i++){
//		printf("a[%d] = ", i); 
		scanf("%d", &a[i]);
	}
}
int getMax(int a[], int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]>max) max=a[i];
	return max;	
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArr(arr,n);
	printf("OUTPUT\n");
	display(arr,n);
	displayReverse(arr,n);
	printf("\nThe maximum value: %d", getMax(arr,n));
	printf("\nThe minimum value: %d", getMin(arr,n));
	return 0;
}
