#include<stdio.h>
void main()
{
	int a[50],i,n,s;
	printf("enter the limit:");
	scanf("%d",&n);
	printf("eneter the number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("square of elements");
	for(i=0;i<n;i++)
	{
		s=a[i]*a[i];
	}
	printf("%d\n",a[i]);
}
