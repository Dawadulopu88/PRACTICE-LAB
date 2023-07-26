#include<stdio.h>
int main()
{
    int x=57;

    if (x>100)
    {
        printf("Invalid");
    }
    else if (x>=80)
    {
        printf("A+");
    }
    else  if (x>=70)
    {
        printf("A");
    }
    else if (x>=60)
    {
        printf("A-");
    }
    else  if (x>=50)
    {
        printf("B");
    }
    else if (x>=40)
    {
        printf("C");
    }
    else if (x<40)
    {
        printf("Fail");
    }
}
