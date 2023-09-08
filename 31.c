#include<stdio.h>

int main()
{

    int num , i=1 , sum=0 ;
    printf("enter a number: ") ;
    scanf("%d" , &num) ;

    while(i<num)
    {

        if(num%i==0)
            {
            sum=sum+i;
            }
            i++ ;

     }

    if(sum==num)
        printf("%d is a perfect number" , i) ;
    else
        printf("%d in not a perfect number " , i);

    return 0 ;


}
