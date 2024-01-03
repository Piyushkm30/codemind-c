#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=3 && a<=100){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("
");
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("
");
    }
    }
    else printf("The pattern is not possible");
}