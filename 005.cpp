#include<stdio.h>
#define i 2
#define j 3

int main()
{
	printf("ÇëÊäÈë%dÎ»Êı×Ö£º",i*j);
	int n,a1=0,a2=0;
	int a[i][j];
	for(int z=0;z<i*j;z++)
	{
		n=getchar();
		a[a1][a2]=n;
		a2++;
		if(a2==j)
		{
			a1++;a2=0;
		}
	}
	printf("a[%d][%d]:\n",i,j);
	for(int a1=0;a1<i;a1++)
	{
		for(int a2=0;a2<j;a2++)
		{
			printf("a[%d][%d]=%c",a1,a2,a[a1][a2]);
			if(a2!=(j-1))
			{
				printf(",");
			}
			else if(a2==(j-1))
			{
				printf("\n");
			}
		} 
	}
}
