#include<stdio.h>
int main(){

int x,y;
float c,d;
scanf("%d%d%f",&x,&y,&c);
d=y*c;
int e,f;
float g,h;
scanf("%d%d%f",&e,&f,&g);
h=f*g;
printf("VALOR A PAGAR: R$ %.2f\n",d+h);

return 0;
}
