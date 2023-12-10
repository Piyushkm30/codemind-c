#include<stdio.h>
int main ()
{
    float x;
    scanf("%f",&x);
    if(x<=10000)
    {
        printf("%.2f",x+((x*4)/5)+x/5);
    }
    else if(x>10000 && x<=20000)
    {
        printf("%.2f",x+((x*9)/10)+(x/4));
    }
    else{
        printf("%.2f",x+((x*19)/20)+((x*3)/10));
    }
    
}