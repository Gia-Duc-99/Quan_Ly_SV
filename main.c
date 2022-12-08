#include <stdio.h>
#include <stdlib.h>
#include "Sinhvien.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int chon, n;
	SV ds[100];
	do{
		system("cls");
		printf("\n------MENU------");
		printf("\n 1. Nhap thong tin hoc vien");
		printf("\n 2. Hien thi thong tin hoc vien");
		printf("\n 3. Tim thong tin hoc vien theo ma hoc vien");
		printf("\n 4. Tim sinh vien diem trung binh cao nhat");
		printf("\n 5. Tim sinh vien diem trung binh thap nhat");
		printf("\n 0. Thoat");
		printf("\n-----------------");
		printf("\n Ban hay chon 1 cong viec: "); scanf("%d",&chon);
		switch (chon)
		{
			case 1:
				system("cls");
				printf("\n1. Nhap thong tin hoc vien");
				nhapDSSV(ds,&n);
				getch();
				break;
			case 2:
				system("cls");
				printf("\n2. Hien thi thong tin hoc vien");
				getch();
				inDSSV(ds,n);
				break;
			case 3:
				system("cls");
				printf("\n3. Tim thong tin hoc vien theo ma hoc vien");
				timSVmax(ds,n);
				getch();
				break;
			case 4:
				system("cls");
				printf("\n4. Tim sinh vien diem trung binh cao nhat\n");
				timSVmax(ds,n);
				getch();
				break;
			case 5:
				system("cls");
				printf("\n5. Tim sinh vien diem trung binh thap nhat\n");
				timSVmin(ds,&n);
				getch();
				break;	
		}
	} while (chon!=0);
	return 0;
}