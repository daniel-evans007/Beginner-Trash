// Print the initials of a name, and the full surname, which should be before the initials. eg-> Daniel Smith Evans ----> Evans. D. S.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[50],n[50];
	int i,j,k=0,l=0;
	system("cls");
	printf("Enter a name : ");
	gets(a);
	l=strlen(a);
	for (j=l;a[j]!=' ';j--);
	for (i=j+1;i<l;i++)
	{
		n[k++]=a[i];
	}
	n[k++]='.';
	n[k++]=a[0];
	n[k++]='.';
	for (i=1;i<j-1;i++)
	{
		if (a[i]==' ')
		{
			n[k++]=a[i+1];
			n[k++]='.';
		}
	}
	n[k]='\0';
	printf("The Name is : %s",n);
	return 0;
}