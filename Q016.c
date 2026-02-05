#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        int last=n%10;
        sum+=last;
        n/=10;
    }
    if(n%sum==0){
        printf("Harshad number");
    }
    else{
        printf("Not a Harshad number");
    }
    return 0;
}