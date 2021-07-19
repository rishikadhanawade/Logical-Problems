#include<stdio.h>
int main()
{
    int f1 = 0, f2 = 1;
    int i,n;
    scanf("%d",&n);
    for (i = 1; i < n; i++) {
        if(f1<=n)
        printf("%d ", f1);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    return 0;
}