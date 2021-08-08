//           * 
//         * * 
//       *   * 
//     *     * 
//   * * * * * 
#include<stdio.h>
int main()
{
    int i,j,n=10;
    for(i=1;i<=n;i++)   //loop for rows
    {
        for(j=i;j<n;j++)  //Decreasing triangle of space
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)  //Increasing triangle of space
        {
            if(i>=3&&i<n)
            {   
                if(j==1||j==i)
                printf("* ");
                else
                printf("  ");
            }
            else
            printf("* ");
    
        }
        printf("\n");  //for new line
    }
}
