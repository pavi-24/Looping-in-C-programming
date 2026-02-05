#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("not a perfect square");
    }
    for(int i=1;i<=n;i++){
        if(i*i==n){
            printf("Perfect square");
            return 0;
        }
    }
    printf("Not a perfect square");
    return 0;
}