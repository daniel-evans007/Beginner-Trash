//Multiple Values in an Array would be transferred once to output array
#include <stdio.h>
int main()
{
	int i,j,f,n,a,x[100],y[100],b=0;
	printf("Enter the number of Elements : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Element %d : ",i);
		scanf("%d",&x[i]);
	}
	for (i=0;i<n;i++)
	{
		a=0;
		for (j=0;j<n;j++)
		{
			if (x[j]==x[i])
			{
				a++;
			}
		}
		if (a>1)
		{
			f=0;
			for (j=0;j<b;j++)
			{
				if (y[j]==x[i])
				{
					f=1;
					break;
				}
			}
			if (f==0)
			{
				y[b]=x[i];
				b++;
			}
		}
	}
	for (i=0;i<b;i++)
	{
		printf("\nElement %d is %d",i,y[i]);
	}
}
