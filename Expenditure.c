#include<stdio.h>
int main ()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=y*30;
    if(z<=x)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}