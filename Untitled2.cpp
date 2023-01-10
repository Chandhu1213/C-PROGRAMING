#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
    printf("enter the value of n(limit):");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		if(i==n)
		printf("%d\n",i);
		else
		printf("%d\n ",i);
	}
	getch();
	return 0;
}
