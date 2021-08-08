// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5
#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)   //loop for rows
    {
        for(j=i;j<=n;j++)  //loop for columns
        {   
            if(i==1||j==i||j==n)
            printf("%d ",j);
            else
            printf("  ");
        }
        printf("\n");  //for new line
    }
}