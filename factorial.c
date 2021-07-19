#include<stdio.h>
int factorial(int m)
{
    if(m==1||m==0)
    return 1;
    else 
    return m*factorial(m-1);

}
int main()
{
    // int n,i,fact=1;
    // printf("Enter the value of n ");
    // scanf("%d",&n);
    // for(i=n;i>=1;i--)
    // {
    //     fact=fact*i;
    // }
    // printf("Factorial is %d",fact);
    int num;
    printf("Enter the value of number");
    scanf("%d",&num);
    int fact=factorial(num);
    printf("Factorial:%d",fact);

}