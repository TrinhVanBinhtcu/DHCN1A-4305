#include <stdio.h>
void ptb1()
{
int a,b;
	printf("phuong trinh bac 1");
	printf("nhap vao he so a : "); scanf("%f", &a);
	printf("nhap vao he so b : "); scanf("%f", &b);

	    if(a == 0)
	    {
		if(b == 0)
		    printf("phuong trinh vo nghiem");
		else
		    printf("phuong trinh co mot nghiem duy nhat x = %f", -b/2*a);
		return 1;
	    }
	    return 0;
}
int main()
{
int n;
printf("MAY TINH CASIO FX 90000 XIN CHAO");
printf("-------------------------------------");
printf("MOI BAN CHON CHUC NANG TINH TOAN");
scanf("%2f",&n);
printf("1. phuong trinh bac 1");
printf("2. phuong trinh bac 2");
printf("3. gia he phuong trinh");
printf("4. tinh dien tich hinh tron");
switch(n)
{
	case 1:
	{
	ptb1();
	break;
	}
}
}
