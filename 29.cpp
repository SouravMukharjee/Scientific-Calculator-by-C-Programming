#include<stdio.h>
int main()
{
    int n, i,a[100],max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\n\n%d",max);
    return 0;
}
