#include<stdio.h>
int main()
{
    int num,fact=1,sum=0;
    // printf("Enter a number ");
    // scanf("%d",&num);
    int n;
    int d=0,i;
    for(num=1;num<=2000000;num++)
    {
        n=num;
    while(n>0)
    {
        d=n%10;
        for(i=d;i>0;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        n=n/10;
    }
    if(sum==num)
    printf("%d ",num);
    d=0;
    sum=0;
    fact=1;
}
}