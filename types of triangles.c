#include <stdio.h>

int main()
{
    int s1 , s2 , s3;
    printf("enter three sides of a triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2&&s2==s3)
    {
        printf("this is an equilateral triangle");
    }
    else if(s1==s2||s2==s3||s1==s3)
    {
        printf("this is an isosceles triangle");
    }
    else
    {
        printf("this is a scalene triangle");
    }
    return 0;
}