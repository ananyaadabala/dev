#include <stdio.h>
void increment(int*i)
{
   *i = *i+1;
}
int main()
{
    int i;
    printf("enter a value");
    scanf("%d",&i);
    
    increment(&i);
    printf("increment value of a is %d",i);
    return 0;
}
