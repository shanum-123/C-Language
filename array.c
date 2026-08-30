#include<stdio.h>
void main()
{
	int a[50],i,n;
	printf("enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("even elements");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d\n",a[i]);
		}
	}
}
