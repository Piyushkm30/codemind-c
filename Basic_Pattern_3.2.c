#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=1;
    for(int i=a;i>=1;i--,x++){
        for(int j=1;j<=i;j++){
            printf("%d ",x);
        }
        printf("
");
    }
}