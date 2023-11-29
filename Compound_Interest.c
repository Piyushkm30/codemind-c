#include<stdio.h>
#include<math.h>
int main ()
{
    int p,r,t;
    float ci,a;
    scanf("%d%d%d",&p,&r,&t);
    a=p*((pow((1+r/100.0),t)));
    ci=a-p;
    printf("%.2f",ci);
}