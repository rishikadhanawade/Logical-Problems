#include<stdio.h>
int main()
{
    int s1,s2,s3,s4;
    printf("Enter the length of the four sides:");
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    printf("Length of sides:%d,%d,%d,%d\n",s1,s2,s3,s4);
    if(s1==s2&&s1==s3&&s1==s4)
    {
    printf("Polygon status:1\n");
    printf("Square status:1");
    }
    else if(s1<(s2+s3+s4)||s2<(s1+s3+s4)||s3<(s1+s2+s4)||s4<(s1+s2+s3))
    {
    printf("Polygon status:1\n");
    printf("Square status:0");
    }
    else
    {
    printf("Polygon status:0\n");
    printf("Square status:0");
    }
}