#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	char k=1;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
