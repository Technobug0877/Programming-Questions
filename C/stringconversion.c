#include<stdio.h>
void main()
{
int i=0;
char a[10];
puts("Enter any String");
gets(a);
while(a[i]!='\0')
{
if(a[i]>=65 && a[i]<=97)
a[i]-=32;


}
printf("%s",a);
}
