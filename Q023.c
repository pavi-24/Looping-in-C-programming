#include<stdio.h>
int main()
{
    int n,o;
    scanf("%d%d",&n,&o);
    while(n!=0){
        int last=n%10;
        if(last==o){
            printf("Yes");
            return 0;
        }
        n/=10;
    }
    printf("No");
    return 0;
}