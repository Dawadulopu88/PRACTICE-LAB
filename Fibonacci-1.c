#include<stdio.h>
int main(){
    int i,n,previous,current,next;
    previous=0;
   current=1;
    next=previous+current;
    scanf("%d",&n);
    printf("Fibonacci series with %d terms: %d, %d",n,previous,current);
    for(i=4;i<=n;i++){

        printf(", %d",next);
        previous=current;
        current=next;
        next=previous+current;


    }
    printf(", ...");

return 0;
}
