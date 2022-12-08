#include "Date.h"
typedef struct
{
	char masv[15];
	char hoten[50];
	int gt; // 0-nữ, 1-nam, 2-khác
	Date ns;
	char noisinh[50];
	char lop[10];
	float diemToan;
	float diemLy;
	float diemHoa;
	float diemTB;
} SV;
void nhapSV(SV *d);
void inSV(SV d);
void nhapDSSV(SV *d, int *n);
void inDSSV(SV *d, int n);
void timSV(SV *d, int n);
void timSVmax(SV *d, int n);
void timSVmin(SV *d, int n);
void tinhDTBSV(SV *d);