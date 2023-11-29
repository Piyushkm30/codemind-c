#include<stdio.h>
int main ()
{
    int s;
    scanf("%d",&s);
    float volume=s*s*s;
    float sa=6*s*s;
    printf("Surface area = %.0f and Volume = %.0f",sa,volume);
}