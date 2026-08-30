#include<stdio.h>
void main()
{
	int a[50],i,min=0,max=0;
	printf("enter the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			printf("max=%d",a[i]);
		}
	
	}
	
}
