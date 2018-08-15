#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,item,a[20],l,r,mid;
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the item to be searched:");
	scanf("%d",&item);
	l=1;
	r=n;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==item)
		{
			break;
		}
		else if(item<a[mid])
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	if(l>r)
	{
		printf("Item not found");
	}
	else
	{
		printf("%d item found at %d position",item,i);
	}
	getch();
}