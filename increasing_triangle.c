// * 
// * *
// * * *
// * * * *
// * * * * *
#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)   //loop for rows
    {
        for(j=1;j<=i;j++)  //loop for columns
        {
            printf("* ");
        }
        printf("\n");  //for new line
    }
}