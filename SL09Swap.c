#include <stdio.h>
void swap(int a, int b){
	int temp = a; a=b; b=temp;
	printf("\nSau khi swap: a = %d, b = %d", a,b );
}
void swap2(int *a, int* b){
	int temp = *a; *a=*b; *b=temp;
	printf("\nSau khi swap voi pointer: a = %d, b = %d", *a,*b );
}
int main(){
	int a = 5,b = 7;
	
	printf("\nTruoc khi swap: a = %d, b = %d", a,b );
	swap(a,b);
	printf("\nSau khi swap in main: a = %d, b = %d", a,b );
	swap2(&a, &b);
	printf("\nSau khi swap2 in main: a = %d, b = %d", a,b );
	
	return 0;
}
