#include<stdio.h>
int main()
{
	int d,sum,n,i;
	printf("armstrong number 1 to 1000");
	for(i=1;i<=1000;i++)
	{
		n=i;
		sum=0;
		while(n>0)
		{
			d=n%10;
			sum=sum+d*d*d;
			n=n/10;
		}
		if(i==sum)
		printf("\n%d",i);
		
	}
	
}
