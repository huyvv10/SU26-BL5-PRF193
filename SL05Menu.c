#include <stdio.h>

int main(){
	int sel;
	do{
		printf("\n-----\n");
		printf("\n1. Nhap");
		printf("\n2. Hien thi");
		printf("\n3. Sua");
		printf("\n4. Xoa");
		printf("\n5. Sap xep");
		printf("\n0. Thoat");
		printf("\nYour selection: ");
		scanf("%d", &sel);
		switch (sel){
			case 1:
				printf("Chuong trinh 1 chay"); break;
			case 2:
				printf("Chuong trinh 2 chay"); break;
			case 3:
				printf("Chuong trinh 3 chay"); break;
			case 4:
				printf("Chuong trinh 4 chay"); break;
			case 5:
				printf("Chuong trinh 5 chay"); break;
			case 0:
				printf("Bye"); break;
			default:
				printf("Hay chon lai.");
		}
	} while (sel!=0);

	return 0;
}
