#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,k,a;
    scanf("%d%d%d",&x,&y,&m);
    k=(pow(x,y));
    a=k%m;
    printf("%d",a);
    return 0;
}