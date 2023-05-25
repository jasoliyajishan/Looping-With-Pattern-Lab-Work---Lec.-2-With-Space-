#include <stdio.h>

int main() {
    int n=5, i, j;

   
    

    for (i = 1; i <= n; i++) 
	{
		for(n=i;n<=4;n++)
  	  	  {
  	  		printf("  ");
		  }
        for (j = i; j >= 1; j--)
	    {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

