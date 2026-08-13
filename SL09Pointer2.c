#include <stdio.h>

int main(){
	int n = 5;
	int *pI = &n;

	printf("Hien thi gia tri: %d", *pI);
	printf("\nHien thi dia chi: %x", pI);
	printf("\nHien thi dia chi cua ban than: %x", &pI);
	
	return 0;
}
