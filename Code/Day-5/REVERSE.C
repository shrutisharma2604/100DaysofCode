#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char n;
	int R,rev=0;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		R=n%10;
		n=n/10;
		rev=rev*10+R;
	}
	printf("Reverse of the number is:%d",rev);
	getch();
}
