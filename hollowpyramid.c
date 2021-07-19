#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)  //decreasing space 
        {
            printf("  ");
        }
        for(j=1;j<i;j++) //increasing star here we take j<i and not j<=i is because we want a overlapping 
        // column for the current and next triangle so we reduce 1 column for the current one.
        {
            if(i>=2&&i<n)
            {
                if(j==1)
                printf("* ");
                else
                printf("  ");
            }
            else
            printf("* ");
        }
         for(j=1;j<=i;j++) //increasing star 
        {
            if(i>=2&&i<n)
            {   
                if(j==i)
                printf("* ");
                else
                printf("  ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }
}
