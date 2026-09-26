#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else if(x<0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}