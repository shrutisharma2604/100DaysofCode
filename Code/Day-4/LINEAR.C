#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,item,a[20];
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the item to be searched:");
	scanf("%d",&item);
	for(i=1;i<=n;i++)
	{
		if(a[i]==item)
		{
			break;
		}
	}
	if(i!=n)
	{
		printf("Item not found");
	}
	else
	{
		printf("%d item found at %d position",item,i);
	}
	getch();
}