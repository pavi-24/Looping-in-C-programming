#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq=n*n;
    if(sq%10==n){
        printf("Automorphic number");
    }
    else{
        printf("Not a Automorphic number");
    }
    return 0;
}