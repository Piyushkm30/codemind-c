#include<stdio.h>
int main ()
{
    int x,y,z,b,c,a;
    scanf("%d%d%d%d%d",&x,&y,&z,&b,&c);
    a=((x+y+z+b+c)/5);
    if(a>=90)
    {
        printf("Grade A");
    }
    else if(a>=80)
    {
        printf("Grade B");
    }
    else if(a>=70)
    {
        printf("Grade C");
    }
    else if(a>=60)
    {
        printf("Grade D");
    }
    else if(a>=40)
    {
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
}