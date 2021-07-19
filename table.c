#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number whose table is to be written");
    scanf("%d",&n);
    int i;
    for(i=1;i<12;i++)
    {
        printf("%d * %d = %d \n",n,i,n*i);
    }
    return 0;

}