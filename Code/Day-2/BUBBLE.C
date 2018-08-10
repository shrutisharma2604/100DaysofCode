#include<stdio.h>
#include<conio.h>
int count=0;
void main()
{
    void input(int[],int);
    void output(int[],int);
    void bubblesort(int [],int);
    int n,a[100];
    clrscr();
    printf("Enter the size of array:");
    scanf("%d",&n);
    input(a,n);
    bubblesort(a,n);
    output(a,n);
    printf("\nValue of the count is=%d",count);
    getch();
}
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void bubblesort(int a[],int n)
{
	int i,temp,pass=1;
	count++;
	for(pass=1;pass<=n-1;pass++)
	{
		count++;
		for(i=0;i<n-pass;i++)
		{
			count++;
			if(a[i]>a[i+1])
			{
				count++;
				temp=a[i]; count++;
				a[i]=a[i+1]; count++;
				a[i+1]=temp; count++;
			}
		}
	}
}
