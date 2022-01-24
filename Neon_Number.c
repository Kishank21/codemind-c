#include<stdio.h>
int main()
{
    int rem,sum=0,n,r,sqr;
    scanf("%d",&n);
    sqr=n*n;
    
    while(sqr!=0)
    {
        rem=sqr%10;
        sum=sum+rem;
        sqr=sqr/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
    
}