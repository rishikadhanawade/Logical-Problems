#include<stdio.h>
int main()
{
    int i,j,n=4;
    //right sided triangle
    for(i=1;i<n;i++)   //loop for rows
    {
        for(j=i;j<=n;j++)  //Decreasing triangle of space
        printf("  ");
        for(j=1;j<=i;j++)  //Increasing triangle of space
        printf("* ");
        printf("\n");  //for new line
    
    }
    //left triangle
      for(i=1;i<=n;i++)
       {
       for(j=1;j<=i;j++) //loop for increasing triangle of space
       printf("  ");
       for(j=i;j<=n;j++) //loop for decreasing traingle of stars.
       printf("* ");
       printf("\n");
       }
      
}
