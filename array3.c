#include<stdio.h>
void main()
{
	int a[50],i,sum=0;
	printf("enter the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==1)
		{
			sum=sum+a[i];
		}
	}
	printf("sum of odd elements=%d",sum);
}
