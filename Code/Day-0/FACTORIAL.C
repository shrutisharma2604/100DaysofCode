#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact=1;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		if(n==0)
		{
			printf("Factorial of the number %d is:",fact);
		}
		else
		{
			printf("Number is not valid\n");
		}
	}
	else
	{
		while(n>0)
		{
			fact=fact*n;
			n--;
		}
		printf("factorial of the number %d is:%d",n,fact);
	}
	getch();
}