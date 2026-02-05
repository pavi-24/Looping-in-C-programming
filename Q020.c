#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n%2==0){
        n=n/2;
    }
    if(n==1){
        printf("Power of 2");
    }
    else{
        printf("not a power of 2");
    }
    return 0;
}