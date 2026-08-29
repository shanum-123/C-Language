#include<stdio.h>
int main()
{
	int i,j,num,sum,d;
	printf("armstrong number 1 to 1000");
	for(i=1;i<=1000;i++)
	{
		sum=0;
		i=num;
	}
	while(num>0)
	{
		d=num%10;
		sum=sum+d*d*d;
		num=num/10;
	}
	if(sum==i)
	{
		printf("%d\n",i);
	}
}
