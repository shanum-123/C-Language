#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the 1 number:");
scanf("%d",&a);
printf("enter the 2 number:");
scanf("%d",&b);
printf("enter the 3 number:");
scanf("%d",&c);
if(a>b&&a>c)
{
	 printf("a is greter=%d",a);
	
}
else if(b>a&&b>c)
{
	printf("b is greter=%d",b);
}
else
{
	printf("c is greter=%d",c);
}
}
