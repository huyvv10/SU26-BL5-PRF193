#include <stdio.h>

int main(){
	int n = 5;
	int *pI;
	pI = &n;
	
	printf("\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi con tro pI tro den: %x", pI);
	printf("\nDia chi cua con tro pI: %x\n", &pI);
	
	*pI = 7;
	printf("\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi con tro pI tro den: %x", pI);
	printf("\nDia chi cua con tro pI: %x", &pI);
	return 0;
}
