#include <stdio.h>
 
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

switch(n){
case 1:{
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
break;
}
case 2:
{
 printf("nhap vao he so a : "); scanf("%f", &a);
    printf("nhap vao he so b : "); scanf("%f", &b);
    printf("nhap vao he so c : "); scanf("%f", &c);

    if(a != 0)
    {
        float deta = b*b - 4*a*c;

        if(deta > 0)
        {
            float x1 = (-b + sqrt(deta)) / 2*a;
            float x2 = (-b - sqrt(deta)) / 2*a;

            printf("vay phuong trinh co 2 nghiem phan biet la \n");
            printf("x1 = %f \n", &x1);
            printf("x2 = %f", & x2);
        }
        else if(deta == 0)
            printf("phuong trinh vo nghiem");
        else
            printf("phuong trinh co nghiem kep x = %f", -b/2*a);

        return 1;
    }
    return 0;
break;
}
}
}
