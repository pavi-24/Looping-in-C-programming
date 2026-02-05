#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",(n%7==0 || n%10==7)?"Buzz NUmber":"Not a Buzz Number");
    return 0;
}