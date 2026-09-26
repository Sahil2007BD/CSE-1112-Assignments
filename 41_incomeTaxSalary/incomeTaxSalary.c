#include <stdio.h>
int main(){
    float x,t;
    scanf("%f",&x);
    if(x<=300000)
        t=0;
    else if(x<=600000)
        t=(x-300000)*0.05;
    else if(x<=1200000)
        t=15000+(x-600000)*0.10;
    else
        t=75000+(x-1200000)*0.15;
    printf("%f",t);
    return 0;
}