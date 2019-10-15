#include<stdio.h>
#define BITSIZE sizeof(int)*8
int main()
{
	int num,sb,i,count=0;
	printf("Enter any no.");
	scanf("%d",&num);
	for(i=0;i<BITSIZE-1;i++)
		{
			sb=1<<i;
			if(sb&num)
				{
					break;
				}
			else
				{
					count++;
				}
			printf("Count is %d",count);
		}
	return 0;
}

