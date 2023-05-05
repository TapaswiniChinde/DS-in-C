#include<stdio.h>
#include<string.h>   //searching technique---> linear
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			printf("elemant found in array\n");
		}
		else
		{
			printf("element are not found\n");
		}
	}
}
