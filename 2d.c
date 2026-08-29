#include<stdio.h>
int main()
{
	int a[20][20],i,j,sum=0;
	printf("enter the matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("sum of diagonal elements in matrix=%d",sum);
}
