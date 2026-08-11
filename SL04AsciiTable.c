#include <stdio.h>

int main(){
	int n=255, i;
	for (i=1; i<=n; i++){
		printf("%d \t %c \t %o \t %x\n", i, i, i, i);
		if (i%23==0) getchar();
	}

	return 0;
}
