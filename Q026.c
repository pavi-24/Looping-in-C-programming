#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int last=n%10;
    n/=10;
    while(n!=0){
        int la=n%10;
        if(la<last){
            printf("not descending order");
            return 0;
        }
        n/=10;
        last=la;
    }
    printf("descending order");
    return 0;
}