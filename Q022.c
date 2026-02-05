#include<stdio.h>
int main()
{
    int n,last;
    scanf("%d",&n);
    while(n!=0){
        last=n%10;
        n/=10;
    }
    if(last%2==0){
        printf("Even");
    }
    else{
        printf("odd");
    }
    return 0;
}