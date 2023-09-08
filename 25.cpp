#include<stdio.h>
int main()
{
    int a,n,r;
    scanf("%d",&n);
    scanf("%d",&a);
    r = a>>n;
    printf("%d",r);
    return 0;
}
