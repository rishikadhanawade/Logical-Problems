#include <stdio.h>
void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
} 
void reverseArray(int *A,int *B,int n)
{
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        B[j++]=A[i];
    }
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    int n=6,b[6];
    printArray(a,n);
    reverseArray(a,b,n);
    printArray(b,n);
    return 0;
}