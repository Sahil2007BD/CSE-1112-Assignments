#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%400==0 || (x%4==0 && x%100!=0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}