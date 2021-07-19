#include<stdio.h>
int main()
{
    int n=3,p,j;
    for(int i=1;i<=n;i++)
    {
        // int ch='z';
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        p=3;
        for(j=i;j<n;j++)
        {
            printf("%d ",p--);
        }
        p=i;
        for(j=i;j<=n;j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }
}