#include<stdio.h>
void main()
{
    int r;  //row
	int c, x=5; // colom
		for(r=1;r<=5;r++)
    	{
	    	printf("\n");
	           for(c=1;c<=x;c++)
		    printf(" ");
		       x--;
		       for(c=1;c<=r;c++)
		    {
            printf("%d ",c);
	
        	}	
    }
    x=1;
       	for(r=5;r>=1;r--)
       {
            printf("\n");
            for(c=1;c<=x;c++)
			{
            	printf(" ");   	            
			}
    	         x++;
    	   for(c=1;c<=r;c++)
		    	{
    		        printf("%d ",c);
    		    }
      	 }
}

