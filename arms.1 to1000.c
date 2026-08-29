#include<stdio.h>
int main()
{
	int d,num,i,sum;
	printf("armstrong number 1 to 1000");
	for(i=1;i<=1000;i++)
	{
		num=i;
		sum=0;
	
	while(num>0)
	{
		d=num%10;
		sum=sum+d*d*d;
		num=num/10;
	}
	if(i==sum)
	printf("\n%d",i);
}
}
