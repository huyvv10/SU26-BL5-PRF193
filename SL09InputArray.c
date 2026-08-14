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
int getMin(int a[], int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]<max) max=a[i];
	return max;	
}
//Return number of even elements within the array
int countEven(int a[], int n){
	int count=0, i;
	for (i=0; i<n; i++)
		if (a[i]%2==0) count++;
	return count;	
}
int countOdd(int a[], int n){
	int count=0, i;
	for (i=0; i<n; i++)
		if (a[i]%2==1) count++;
	return count;	
}

//Return the position first found x in the array
//Return -1 in case find not found.
int getFirstPos(int a[], int n, int x){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==x) {
			pos=i; break;
		}	
	return pos;	
}

//Return all position of x within the array.
void getAllPos(int a[], int n, int x){
	int i, flag=0;
	for (i=0; i<n; i++)
		if (a[i]==x) {
			printf("%d ", i);
			flag=1;
		}
	if (flag==0)
		printf("Find not found %d in the array", x);	
}
//Sort the array in ascending order using Selection sort
void sortAscSelection(int a[], int n){
	int i,j, minId=0;
	for (i=0; i<n-1; i++){
		minId=i;
		for (j=i+1; j<n; j++)
			if (a[minId] > a[j]) minId=j;	//Swap > to < to change ASC=>Desc
		if (i!=minId){
			int temp=a[i]; a[i]=a[minId]; a[minId]=temp;
		}	
	}	
}
//Sort the array in descending order using Selection sort
void sortDescSelection(int a[], int n){
	int i,j, minId=0;
	for (i=0; i<n-1; i++){
		minId=i;
		for (j=i+1; j<n; j++)
			if (a[minId] < a[j]) minId=j;	//Swap > to < to change ASC=>Desc
		if (i!=minId){
			int temp=a[i]; a[i]=a[minId]; a[minId]=temp;
		}	
	}	
}

//Sorting using Bubble sort algorithm
void sortBubbleAsc(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] > a[j]){
				int temp=a[j]; a[j]=a[j-1]; a[j-1]=temp;
			}
}
//Sorting using Bubble sort algorithm
void sortBubbleDesc(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1] < a[j]){
				int temp=a[j]; a[j]=a[j-1]; a[j-1]=temp;
			}
}
int main(){
	int n=14;
//	scanf("%d", &n);
//	int arr[n];
	int arr[]={5,2,7,9,5,4,2,8,6,3,2,5,6,8};
//	inputArr(arr,n);
	printf("OUTPUT\n");
	display(arr,n);
	displayReverse(arr,n);
	printf("\nThe maximum value: %d", getMax(arr,n));
	printf("\nThe minimum value: %d", getMin(arr,n));
	printf("\nNumber of even elements: %d", countEven(arr,n));
	printf("\nNumber of odd elements: %d", countOdd(arr,n));
	int x;
	printf("\nInput searching number: "); scanf("%d",&x);
	int pos = getFirstPos(arr,n,x);
	if (pos>=0)
		printf("The position first found %d in the array is %d\n", x, pos);
	else
		printf("Find not found %d in the array\n", x);
	getAllPos(arr,n,x);	
//	printf("\nSort Selection Asc\n");
//	sortAscSelection(arr, n);
//	display(arr,n);	
//	printf("\nSort Selection Desc\n");
//	sortDescSelection(arr, n);
//	display(arr,n);	
	printf("\nSort Bubble Asc\n");
	sortBubbleAsc(arr, n);
	display(arr,n);	
	printf("\nSort Bubble Desc\n");
	sortBubbleDesc(arr, n);
	display(arr,n);	
	return 0;
}
