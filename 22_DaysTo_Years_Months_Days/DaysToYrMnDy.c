#include <stdio.h>
int main(){
    int x,y,m,d;
    scanf("%d",&x);
    y=x/365;
    x=x%365;
    m=x/30;
    d=x%30;
    printf("%d %d %d",y,m,d);
    return 0;
}