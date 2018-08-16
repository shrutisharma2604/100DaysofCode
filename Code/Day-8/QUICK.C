#include<stdio.h>
#include<conio.h>
int count=0;
void input(int[],int);
void output(int[],int);
void quicksort(int[],int,int);
int partition(int[],int,int);
void main()
{
	int a[100],n,p,r;
	clrscr();
	printf("Enter the size of array:");
	scanf("%d",&n);
	p=0;
	r=n-1;
	input(a,n);
	quicksort(a,p,r);
	output(a,n);
	printf("\nvalue of the count is=%d",count);
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
void quicksort(int a[],int p,int r)
{
	int q;
	count++;
	if(p<r)
	{
		count++;
		q=partition(a,p,r); count++;
		quicksort(a,p,q-1); count++;
		quicksort(a,q+1,r); count++;
	}
}
int partition(int a[],int p,int r)
{
	int pivot,i,j,temp;
	pivot=a[r]; count++;
	i=p-1; count++;
	for(j=p;j<=r-1;j++)
	{
		count++;
		if(a[j]<=pivot)
		{
			i=i+1; count++;
			temp=a[i]; count++;
			a[i]=a[j]; count++;
			a[j]=temp; count++;
		}
	}
	temp=a[i+1]; count++;
	a[i+1]=a[r]; count++;
	a[r]=temp;   count++;
	return i+1;
}


