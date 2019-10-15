#include<stdio.h>
int main()
{
int a,*A;
float b,*B;
char c,*C;
a=1;
b=1.2;
c='Z';
A=&a;
B=&b;
C=&c;
printf("Size of integer pointer=%d\n",sizeof(A));
printf("Size of float pointer=%d\n",sizeof(B));
printf("Size of char pointer=%d",sizeof(C));
return 0;
}
