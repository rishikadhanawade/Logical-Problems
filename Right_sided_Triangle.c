//           * 
//         * *
//       * * *
//     * * * *
//   * * * * *
#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)   //loop for rows
    {
        for(j=i;j<n;j++)  //Decreasing triangle of space
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)  //Increasing triangle of space
        {
            printf("* ");
        }
        printf("\n");  //for new line
    }
}
