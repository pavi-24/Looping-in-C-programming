#include<stdio.h>
int main()
{
    int n,digit=0,last;
    scanf("%d",&n);
    int temp=n;
    int t=n;
    while(temp!=0){
        last=temp%10;
        digit++;
        temp/=10;
    }
    int m=1;
    for(int i=1;i<digit;i++){
        m*=10;
    }
    int first=t%10;
    t/=10;
    int sl=t*10+last;
     t=sl%m;
    sl=first*m+t;
    printf("%d",sl);
    return 0;
}