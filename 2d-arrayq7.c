#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],ans[20][20];
	int k,i,j;
	printf("enter the 1st matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2nd matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			ans[i][j]=0;
			for(k=0;k<3;k++)
			{
			ans[i][j]=ans[i][j]+a[i][k]*b[k][j];
		    }
		}
	}
	printf("ans of multiplication\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
}
