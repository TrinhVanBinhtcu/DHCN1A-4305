#include<stdio.h>
long GT(int n){
if(n==1) return 1;
else return GT(n-1)*n;
}
