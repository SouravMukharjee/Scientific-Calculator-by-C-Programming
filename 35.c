#include<stdio.h>

int main()
{

    int num;
    int min,max;
    double sum =0;

    printf( "Enter the minimum range: " ) ;
    scanf("%d" , &min) ;

    printf( "Enter the maximum range: " ) ;
    scanf("%d" , &max) ;

    for(num = min;num <= max; num++)
        {

         if(num % 2 ==0)
             sum = sum + num;
        }
    printf("Sum of even numbers in given range is: %.2lf\n " , sum ) ;

    return 0;

}
