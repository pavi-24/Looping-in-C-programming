#include<stdio.h>
int main()
{
    int n,last;
    scanf("%d",&n);
    while(n!=0){
        last=n%10;
        n/=10;
    }
    printf("%d",last);
    return 0;
}