#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n;
	printf("\nEnter the limit: ");
	scanf("%d",&n);
	printf("\nODD Numbers between 1 and %d are: \n",n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	getch();
}
