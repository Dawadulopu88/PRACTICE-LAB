#include<stdio.h>
int main()
{
    int x;
    printf("\t\t *Between 1 To 5*");
    printf("\nEnter The Rating: ");
    scanf("%d",&x);
    if (x==1)
    {
        printf("Poor");
    }
    if (x==2)
    {
        printf("Good");
    }
    if (x==3)
    {
        printf("Very Good");
    }
    if (x==4)
    {
        printf("Excellent");
    }
    if (x==5)
    {
        printf("Magnificent");
    }
    else
    {
        printf("\aError Check Your Rating Please");
    }
}
