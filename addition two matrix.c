#include<stdio.h>
int main()
{
	int i,j,row,col,a[50][50],b[50][50],c[50][50];
	printf("enter the row:");
	scanf("%d",&row);
	printf("enter the col:");
	scanf("%d",&col);
	
	printf("\n accept matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n accept matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\naddition of matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
