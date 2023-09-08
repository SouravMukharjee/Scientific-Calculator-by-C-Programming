#include<stdio.h>
int main()
{
   double n, r , i , x  , nPr ;
   double fact1 = 1 , fact2 = 1 ;

   printf("Enter the value of n and r\n");
   scanf("%lf%lf",&n,&r);

    x = n-r ;

    for(i=1 ; i<=n ; i++){
        fact1= fact1 *n ;
    }


for(i=1 ; i<=x ; i++){


    fact2= fact2*x ;
}
nPr = fact1/(fact2) ;


   printf("%.0lfP%.0lf = %lf\n", n, r, nPr);

   return 0;
}
