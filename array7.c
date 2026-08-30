#include<stdio.h>
int main()
{
	int a[20],i;
	printf("enter the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
      for(i=5-1;i>=0;i--)
      {
      	printf("%d"  ,a[i]);
	  }
}
