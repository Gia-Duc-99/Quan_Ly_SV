#include <stdio.h>
#include "Sinhvien.h"
void nhapSV(SV *d)
{
	fflush(stdin);
	printf("Nhap ma sinh vien: "); gets(d->masv);
	printf("Ho va ten sinh vien: "); gets(d->hoten);
	do {
		printf("Nhap gioi tinh (0-Nu/1-Nam/2-Khac): "); scanf("%d",&d->gt);
		if (d->gt<0||d->gt>2) printf("Gia tri khong hop le, hay nhap lai\n");
	} while (d->gt<0||d->gt>2);
	inputDate(&d->ns);
	fflush(stdin);
	printf("Nhap noi sinh: "); gets(d->noisinh);
	printf("Nhap lop: "); gets(d->lop);
	printf("Nhap diem Toan: "); scanf("%f",&d->diemToan);
	printf("Nhap diem Ly: "); scanf("%f",&d->diemLy);
	printf("Nhap diem Hoa: "); scanf("%f",&d->diemHoa);
	tinhDTBSV(d);
	
}
void inSV(SV d)
{
	printf("\nMa sinh vien: %s",d.masv);
	printf("\nTen sinh vien: %s",d.hoten);
	printf("\nGioi tinh: %s",(d.gt==0?"Nu":(d.gt==1?"Nam":(d.gt==2?"Khac":""))));
	printf("\nNgay sinh:");outputDate(d.ns);
	printf("\nQue quan: %s",d.noisinh);
	printf("\nLop: %s",d.lop);
	printf("\nDiem Toan: %f",d.diemToan);
	printf("\nDiem Ly: %f",d.diemLy);
	printf("\nDiem Hoa: %f",d.diemHoa);
	printf("\nDiem trung binh: %f",d.diemTB);
}
void nhapDSSV(SV *d,int *n)
{
	int i;
	printf("\nSo hoc vien muon nhap:");scanf("%d",n);
	for (i=0;i<*n;i++)
	{
		printf("\nHoc vien thu %d:\n",i+1);
		nhapSV(&d[i]);
	}
	printf("\nNhap du lieu thanh cong...");
}
void inDSSV(SV *d,int n)
{
	int i;
	printf("\nCac hoc vien da nhap:");
	for (i=0;i<n;i++)
	{
		printf("\nHoc vien thu %d:\n",i+1);
		inSV(d[i]);
	}
}
void timSV(SV *d,int n)
{
	char findText[15];
	int i;
	fflush(stdin);
	printf("\nNhap ma sinh vien muon tim:");gets(findText);
	for (i=0;i<n;i++)
		if (strcmp(d[i].masv,findText)==0)
	 		{
	 			inSV(d[i]);
	 		}
}
void tinhDTBSV(SV *d)
{
	d->diemTB = (d->diemToan + d->diemLy + d->diemHoa)/3;
}
void timSVmax(SV *d,int n)
{
	int i;
	SV temp;
	fflush(stdin);
	for (i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(d[i].diemTB > d[j].diemTB){
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
}
void timSVmin(SV *d,int n)
{
	int i;
	SV temp;
	fflush(stdin);
	for (i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(d[i].diemTB < d[j].diemTB){
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
}