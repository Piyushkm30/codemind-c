#include<stdio.h>
int main ()
{
    float x;;
    scanf("%f",&x);
    if(x<=199)
    {
        printf("%.2f",(x*1.2)+100);
    }
    else if(x>=200 && x<400)
    {
        printf("%.2f",(x*1.5)+100);
    }
    else if(x>=400 && x<600)
    {
        printf("%.2f",(x*1.8)+(x*1.8)*15/100);
    }
    else {
        printf("%.2f",(x*2)+(x*2)*15/100);
    }
}