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
printf("a=%d\nb=%f\nc=%c\n",a,b,c);
printf("Address in pointer A=%u\n",A);
printf("Address in pointer B=%u\n",B);
printf("Address in pointer C=%u\n\n",C);
A++;
B++;
C++;
printf("New Address in pointer A=%u\n",A);
printf("New Address in pointer B=%u\n",B);
printf("New Address in pointer C=%u\n\n",C);
A--;
B--;
C--;
printf("New Address in pointer A=%u\n",A);
printf("New Address in pointer B=%u\n",B);
printf("New Address in pointer C=%u\n\n",C);
A=A+10;
B=B+10;
C=C+10;
printf("New Address in pointer A=%u\n",A);
printf("New Address in pointer B=%u\n",B);
printf("New Address in pointer C=%u\n\n",C);
A=A-10;
B=B-10;
C=C-10;
printf("New Address in pointer A=%u\n",A);
printf("New Address in pointer B=%u\n",B);
printf("New Address in pointer C=%u\n\n",C);

return 0;
}

