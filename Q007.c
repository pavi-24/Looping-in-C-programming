#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit=0;
    scanf("%d",&n);
    int temp=n,sum=0;
    while(temp!=0){
        int last=temp%10;
        digit++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        int last=temp%10;
        sum+=pow(last,digit);
        temp/=10;
    }
    if(sum==n){
        printf("armstrong Number");
    }
    else{
        printf("Not a armstrong number");
    }
    return 0;
}