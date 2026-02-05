#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d",&n);
    while(n>9){
        int num=0;
        while(n!=0){
            int last=n%10;
            num+=last;
            n/=10;
        }
        n=num;
    }
    if(n==1){
        printf("Magic Number");
    }
    else{
        printf("Not a Magic Number");
    }
    return 0;
}