#include <stdio.h>
int main(){
    int x,y,z,a,m;
    scanf("%d%d%d%d",&x,&y,&z,&a);
    m=x;
    if(y>m)m=y;
    if(z>m)m=z;
    if(a>m)m=a;
    printf("%d",m);
    return 0;
}