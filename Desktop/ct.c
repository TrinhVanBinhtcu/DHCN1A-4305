#include<stdio.h>
#include<math.h>
#include<conio.h>
float ptb1()
{
float a,b;
    printf("nhap vao he so a : "); 
scanf("%f", &a);
    printf("nhap vao he so b : "); 
scanf("%f", &b);

    if(a == 0)
    {
        if(b == 0)
            printf("phuong trinh vo nghiem");
        else
            printf("phuong trinh co mot nghiem duy nhat x = %f", -b/2*a);
        return 1;
    }
    return 1;
}
float ptb2()
{
float a,  b,  c,x1,x2,deta;
    printf("nhap vao he so a : "); 
scanf("%f", &a);
    printf("nhap vao he so b : "); 
scanf("%f", &b);
    printf("nhap vao he so c : "); 
scanf("%f", &c);

    if(a != 0)
    {
         deta = b*b - 4*a*c;

        if(deta > 0)
        {
             x1 = (-b + sqrt(deta)) / 2*a;
             x2 = (-b - sqrt(deta)) / 2*a;

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
    return 1;
}
int main()
{
int n;
printf("MAY TINH CASIO FX 90000 XIN CHAO\n");
printf("-------------------------------------\n");
printf("1. phuong trinh bac 1 \n");
printf("2. phuong trinh bac 2\n");
printf("3. gia he phuong trinh\n");
printf("4. tinh dien tich hinh tron\n");
printf("MOI BAN CHON CHUC NANG TINH TOAN\n");
scanf("%2d",&n);
switch(n){
case 1:
{
printf("Ket qua tinh toan: %2f \n",ptb1());
break;
}
case 2:
{
printf("Ket qua tinh toan: %2f \n",ptb2());
break;
}
}
}
