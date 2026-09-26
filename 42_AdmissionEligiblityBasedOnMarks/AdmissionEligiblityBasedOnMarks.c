#include <stdio.h>
int main(){
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    if(x>=60 && y>=60 && z>=60 && (x+y+z)/3>=70)
        printf("Eligible");
    else
        printf("Not Eligible");
    return 0;
}