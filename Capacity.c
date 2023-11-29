#include<stdio.h>
int main ()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    float c=2*t*s*b*512;
    float d=c/1024;
    printf("%.0f KB",d);
}