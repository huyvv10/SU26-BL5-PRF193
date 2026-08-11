#include <stdio.h>

int main(){
	int m,y;
	printf("Input a month: "); scanf("%d", &m);
	switch (m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d has 31 days", m); break;
		case 4:	
		case 6:	
		case 9:	
		case 11:
			printf("%d has 30 days", m); break;
		case 2:			
			printf("Input year: "); scanf("%d", &y);
			if (y%400==0 || (y%4==0 && y%100!=0))
				printf("%d has 29 days", m); 
			else
				printf("%d has 28 days", m); 
			break;
		default:
			printf("%d is not a month of the year.", m)	;			
	}
	return 0;
}
