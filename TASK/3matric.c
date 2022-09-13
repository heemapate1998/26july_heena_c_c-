#include<stdio.h>
void main()
{
	int h[3][3];
	int r,c;
	for(r = 0; r < 3; r++ )
	{
		for(c = 0; c < 3; c++)
		{
			printf("Enter value of no :[%d][%d]",r,c,h[r][c]);
			scanf("%d",&h[r][c]);
		}
		printf("\n");
		
	}
    	for(r = 0; r < 3; r++)
	{
		for(c = 0; c < 3; c++)
		{
			
			printf("%d ",h[r][c]);
		}
		printf("\n");
	}
}
