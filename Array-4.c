// Multiple Elements present in both input arrays or in each input array, will get transferred only once in output array.
#include <stdio.h>
int main()
{
	int i,j,x[5],y[5],z[10],f,a=0;
	printf("For first Array\n");
	for (i=0;i<5;i++)
	{
		printf("Enter Element %d : ",i);
		scanf("%d",&x[i]);
	}
	printf("\nFor second Array\n");
	for (i=0;i<5;i++)
	{
		printf("Enter Element %d : ",i);
		scanf("%d",&y[i]);
	}
	for (i=0;i<5;i++)
	{
		f=0;
		for (j=0;j<a;j++)
		{
			if (z[j]==x[i])
			{
				f=1;
				break;
			}
		}
		if (f==0)
		{
			z[a]=x[i];
			a++;
		}
	}
	for (i=0;i<5;i++)
	{
		f=0;
		for (j=0;j<a;j++)
		{
			if (z[j]==y[i])
			{
				f=1;
				break;
			}
		}
		if (f==0)
		{
			z[a]=y[i];
			a++;
		}
	}
	for (i=0;i<a;i++)
	{
		printf("\n%d Element is : %d",i,z[i]);
	}
}