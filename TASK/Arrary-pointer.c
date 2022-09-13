#include<stdio.h>
void main()
{
	int h[20];
	int *ans;
	int r;
	ans=&h[0];
	printf("Enter value : ");
	for(r = 0; r < 10 ; r++)
	{
		printf(" No[%d]",r+1);
		scanf("%d",&*ans++);
	}
	  ans=&h[0];
		printf("value is :- \n ");
		for(r=0;r<10;r++)
		{
			printf("\n No [%d] :\t\t %d ",r+1,*ans++);
		}
	
}
