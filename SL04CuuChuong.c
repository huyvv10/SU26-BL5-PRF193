#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	for (i=0; i<=10; i++)
		printf("%d x %d = %d\n", n, i, n*i);
		
	printf("\n");
	for (i=1; i<=10; i++){
		for (j=2; j<=9; j++)
			printf("%d x %d = %d\t", j, i, i*j);
		printf("\n");	
	}
		
	return 0;
}
