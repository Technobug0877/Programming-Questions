#include<stdio.h>
void main()
{
int l=0,i=0;
char s1[10],s2[10];
puts("Enter String 1");
gets(s1);
puts("Enter String 2");
gets(s2);
while(s1[i]!='\0')
	{
		i++;
	}
printf("Total no. of characters = %d",i);

while(s2[l]!='\0')
	{
		l++;
	}
printf("Total no. of characters = %d\n",l);
if(i==l)
	{
	printf("Equal");
	}
else
	{
	printf("Unequal");
	}
}
