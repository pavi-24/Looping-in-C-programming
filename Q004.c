#include<stdio.h>
int main()
{
    int n,pro=1;
    scanf("%d",&n);
    while(n!=0){
        int last=n%10;
        pro*=last;
        n/=10;
    }
    printf("%d",pro);
    return 0;
}