#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int sq=n*n;
    while(sq!=0){
        int la=sq%10;
        sum+=la;
        sq/=10;
    }
    if(sum==n){
        printf("Neon Number");
    }
    else{
        printf("Not a Neon NUmber");
    }
    return 0;
}