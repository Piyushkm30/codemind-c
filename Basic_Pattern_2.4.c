#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
      int  b=a-i+1;
        for(int j=1;j<=i;j++){
           // int b=a-i+1;
            printf("%d ",b);
            b++;
        }
        printf("
");
    }
}