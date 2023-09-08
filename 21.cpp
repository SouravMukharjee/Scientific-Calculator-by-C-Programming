#include<stdio.h>
int main()
{

    long int b,h=0,j=1,r;

   // printf("Enter any number any binary number: ");
    scanf("%ld",&b);

    while(b!=0)
      {
          r=b%10;
          h=h+r*j;
          j=j*2;
          b=b/10;
      }

    printf("%d",h);
    return 0;
}
