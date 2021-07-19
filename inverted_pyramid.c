//   * * * * * * * * * 
//     * * * * * * *
//       * * * * *
//         * * *
//           *

#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++) //Increasing Space
        {
            printf("  ");
        }
        for(j=i;j<n;j++) //Decreasing star we take j<n and not j<=n is because we want a overlapping 
        // column for the current and next triangle so we reduce 1 column for the current one.
        {
            printf("* ");
        }
          for(j=i;j<=n;j++) //Decreasing star
        {
            printf("* ");
        }
        printf("\n");
    }
}