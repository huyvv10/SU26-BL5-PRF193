#include <stdio.h>

int USCLN(int a, int b){
	while (a!=b){
		if (a>b)
			a=a-b;
		else
			b=b-a;	
	}
	return a;
}

int BSCNN(int a, int b){
	int lon = a>=b ? a : b;
	int be = a<b? a : b;
	int uscln = USCLN(a,b);
	return (lon/uscln)*be;
}

int main(){
	int m, n;
	scanf("%d%d",&m, &n);
	printf("OUTPUT\n");
	printf("%d %d", USCLN(m,n), BSCNN(m,n));
	return 0;
}
