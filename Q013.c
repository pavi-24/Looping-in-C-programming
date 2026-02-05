#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        int last=temp%10,mul=1;
        while(last!=0){
            mul*=last;
            last--;
        }
        sum+=mul;
        temp/=10;
    }
    if(n==sum){
        printf("Strong Number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}