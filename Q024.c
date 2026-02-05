#include<stdio.h>
int main()
{
    int n,a,count=0;
    scanf("%d%d",&n,&a);
    while(n!=0){
        int last=n%10;
        if(last==a){
            count++;
        }
        n/=10;
    }
    printf("%d",count);
    return 0;
}