#include<stdio.h>
 int main()
{
    int i,j,k,n;
	printf("enter the value of n \n");
	scanf("%d",&n);
for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			printf(" ");
		}
		for(j=n-i; j<n+1; j++) {
			printf("H");
		}
		for(j=0; j<i; j++) {
			printf("H");
		}
		printf("\n");
	}
	for(i=0; i<n+1; i++)
	{
		//print H upto n times in column wise and print column upto n+1 times
		for(j=0; j<((n-1)/2); j++)
		{
			printf(" ");
		}
		for(j=0; j<n; j++)
		{
			printf("H");
		}
		for(k=0;k<(3*n);k++)
		{
			printf(" ");
		}
		for(j=0; j<n; j++)
		{
			printf("H");
		}
		printf("\n");
	}
	for(i=0;i<((n+1)/2);i++)
	{
		for(j=0; j<((n-1)/2); j++)
		{
			printf(" ");
		}
		for(j=0;j<n;j++)
		{
			printf("H");
		}
		for(k=0;k<(3*n);k++)
		{
			printf("H");
		}
		for(j=0;j<n;j++)
		{
			printf("H");
		}
		printf("\n");
	}for(i=0; i<n+1; i++)
	{
		//print H upto n times in column wise and print column upto n+1 times
		for(j=0; j<((n-1)/2); j++)
		{
			printf(" ");
		}
		for(j=0; j<n; j++)
		{
			printf("H");
		}
		for(k=0;k<(3*n);k++)
		{
			printf(" ");
		}
		for(j=0; j<n; j++)
		{
			printf("H");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0; j<((n-1)/2); j++)
		{
			printf(" ");
		}
		for(j=0; j<n; j++)
		{
			printf(" ");
		}
		for(k=0;k<((3*n)-((n-1)/2));k++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<n;j++)
		{
			printf("H");
		}
		for(j=i;j<n-1;j++)
		{
			printf("H");
		}
		printf("\n");
	}
    return 0;
}
