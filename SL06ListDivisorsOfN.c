#include <stdio.h>

void listDivisorsOfN(int n){
	int i;
	for (i=1; i<=n/2; i++)
		if (n%i==0)
			printf("%d ", i);
	printf("%d", n);		
}
int main(){
	int n;
	scanf("%d",&n);
	printf("OUTPUT\n");
	listDivisorsOfN(n);
	return 0;
}
