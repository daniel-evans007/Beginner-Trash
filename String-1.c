//Getting the words of a sentence reversed, and printing them.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
	void reverse(char[]);
	char a[50];
	printf("Enter a sentence : ");
	gets(a);
	reverse(a);
}
void reverse(char a[50])
{
	char n[50], m[50];
	int i,j,k=0,l=0,o=0;
	l = strlen(a);
	a[l]=' ';
	a[l+1]='\0';
	printf("The reversed words are : ");
	for (i=0;i<=l;i++)
	{
		if (a[i]!=' ')
		{
			n[k++]=a[i];
		}
		else
		{
			n[k]='\0';
			printf("\n-->%s",n);
			o=0;
			for (j=k-1;j>=0;j--)
			{
				m[o++]=n[j];
			}
			m[o]='\0';
			printf("\n==>%s",m);
			k=0;
		}
	}
}