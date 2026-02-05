#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(b!=0){
        int num=b;
        b=a%b;
        a=num;
    }
    printf("%d",a);
    return 0;
}