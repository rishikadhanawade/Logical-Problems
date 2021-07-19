
    // * * * *
    //   * * *
    //     * *
    //       *
#include<stdio.h>
int main()
{
    int i,j,n=5;
   for(i=1;i<=n;i++)
   {
       for(j=2;j<=i;j++) //loop for increasing triangle of space
       {
           printf("  ");
       }

       for(j=i;j<=n;j++) //loop for decreasing traingle of stars.
       {
           printf("* ");
       }
       printf("\n");
   }
    
}