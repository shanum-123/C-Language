#include<stdio.h>
int main()
{
	int d,num,num1,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		d=num%10;
		sum=sum+d*d*d;
		num=num/10;
	}
	if(num1==sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
}
