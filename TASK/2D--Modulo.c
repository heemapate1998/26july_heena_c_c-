#include<stdio.h>
void main()
{
	int h[3][3];
	int h1[20][20];
	int r,c,a,b,e;
	printf("Enter the row : ");
	scanf("%d",&a);
	printf("Enter the column : ");
	scanf("%d",&b);
	 printf("\n // Frist Matric //\n");
	for(r = 0; r < a; r++ )
	{
		for(c = 0; c < b; c++)
		{
			printf("Enter value of no :[%d][%d]",r,c,h[r][c]);
			scanf("%d",&h[r][c]);
		}
	//	printf("\n");
		
	}
    	for(r = 0; r < a; r++)
	{
		for(c = 0; c < b; c++)
	    {
	      //printf("%d ",h[r][c]);
		}
	//	printf("\n");
	}
	printf("\n // Scound Matric //\n");
	   for(r = 0; r < a; r++ )
	{
		for(c = 0; c < b; c++)
		{
			printf("Enter value of no :[%d][%d]",r,c,h[r][c]);
			scanf("%d",&h1[r][c]);
		}
		//printf("\n");
		
	}
    	for(r = 0; r < a; r++)
	{
		for(c = 0; c < b; c++)
		{
			
			//printf("%d ",h1[r][c]);
		}
	//	printf("\n");
	}
	 printf("\n --->/* Two MAtrics Addition */ ");
	 printf("\n");
	for(r=0; r<a; r++)
	{
		for(c=0; c<b; c++)
		{
		e=h[r][c]%h1[r][c];
		printf("%d ",e);
	}
	printf("\n");
		 
	}
}
