#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=-1,b=1,c;
	clrscr();
	printf("Enter the element of the series:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	getch();
}