#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,key,count=0,a[100],n;
	clrscr();
	printf("enter the size of the array:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
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
	printf("value of the count is=%d\n",count);
	printf("The sorted array is:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
