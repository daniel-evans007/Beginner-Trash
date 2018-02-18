//Array frequency table
#include <stdio.h>
int main()
{
	int i,j,n,a,f,pos=0,x[1000];

	printf("Enter the number of elements in the array : ");
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
				pos=i;
			}
		}
		if (a>1)
		{
			f=0;
			for (j=0;j<pos;j++)
			{
				if (x[j]==x[i])
				{
					f=1;
					break;
				}
			}
			if (f==0)
			{
				printf("\n%d appears %d times",x[i],a);
			}
		}
		else if (a==1)
		{
			printf("\n%d appears 1 time",x[i]);
		}
	}
}