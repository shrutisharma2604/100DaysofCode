#include<stdio.h>
#include<conio.h>
int count=0;
void input(int [],int);
void output(int [],int);
void mergesort(int [],int,int);
void merge(int [],int,int,int);
void main()
{
	int a[100],n,p,r;
	clrscr();
	printf("enter the size of the array:");
	scanf("%d",&n);
	p=0;
	r=n-1;
	input(a,n);
	mergesort(a,p,r);
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
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void mergesort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		count++;
		q=(p+r)/2;
		mergesort(a,p,q); count++;
		mergesort(a,q+1,r); count++;
		merge(a,p,q,r); count++;
	}
}
void merge(int a[],int p,int q,int r)
{
	int n1,n2,i,j,k;
	int L[51],R[51];
	n1=q-p+1; count++;
	n2=r-q;   count++;
	count++;
	for(i=0;i<n1;i++)
	{
		L[i]=a[p+i]; count++;
	}
	count++;
	for(j=0;j<n2;j++)
	{
		count++;
		R[j]=a[q+j+1]; count++;
	}
	count++;
	L[n1]=9999; count++;
	R[n2]=9999; count++;
	i=0; count++;
	j=0; count++;
	count++;
	for(k=p;k<=r;k++)
	{
		if(L[i]<R[j])
		{
			a[k]=L[i]; count++;
			i++; count++;
		}
		else
		{
			a[k]=R[j]; count++;
			j++; count++;
		}
	}
}





