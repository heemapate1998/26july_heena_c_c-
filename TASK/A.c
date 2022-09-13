#include<stdio.h>
void main()
{
	int r,c=0,x;
	for(r=0;r<=10;r++)	
	{
	        for(x=9;x>=r;x--)
	        {
	        	printf(" ");
			}
			for(x=0;x<=r;x++)
			{
			c=c+1;
			if(c==5||c>7&&c<10||c>11&&c<15||c>21&&c<22||c>22&&c<28||c>29&&c<36||c>37&&c<45||c>46&&c<55||c>56&&c<66)
			{
			printf("  ");
			}
			else
			{
				printf(" *");
			}
		}
			printf("\n");	
   }
}
  
