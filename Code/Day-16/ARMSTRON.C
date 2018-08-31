#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,n,num=0;
	clrscr();
	printf("enter the number:");
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
		a=i%10;
		num+=a*a*a;
		i=i/10;
	}
	if(num==n)
	{
		printf("\nIt is an armstrong number");
	}
	else
	{
		 printf("\nIt is not an armstrong number");
	}
	getch();
}