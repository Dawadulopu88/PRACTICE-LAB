#include<stdio.h>
int main()
{
    int x=3;
    //scanf("%d",x);
    if (x%5==0 && x%2!=0 && x!=100)
    {
        printf("It is Divisible by 5\n");
    }
    if (x%10==0||x%3==0)
    {
        printf("It is Divisible by 10 or div by 3\n");
    }
    if (x%15==0)
    {
        printf("It is Divisible by 15");
    }




}
