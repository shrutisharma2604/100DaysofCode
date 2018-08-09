#include<stdio.h>
#include<conio.h>
int count=0;
void main()
{
	void input(int [],int);
	void output(int [],int);
	void insertionsort(int [],int);
	int a[100],n;
	clrscr();
	printf("enter the size of the array:");
	scanf("%d",&n);
	input(a,n);
	insertionsort(a,n);
	output(a,n);
	printf("\nvalue of the count is=%d",count);
	getch();
}
void input(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&a[i]);
	}
}
void output(int a[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insertionsort(int a[],int n)
{
	int i,j,key;
	count++;
	for(j=2;j<=n;j++)
	{
		key=a[j]; count++;
		i=j-1;    count++;
		count++;
		while(i>=0 && a[i]>key)
		{
			count++;
			a[i+1]=a[i]; count++;
			i=i-1; count++;
		}
		a[i+1]=key; count++;
	}
}
