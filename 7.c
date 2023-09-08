#include<stdio.h>
#include<math.h>

int main()
{

    double x , val , rec ;
    double pi = 3.14159265 ;

        printf("X= ") ;
        scanf("%lf" , &x) ;

        val= pi/180 ;
        rec= cos(x*val) ;
        printf("cos(%.2lf) = %.2lf\n" , x , rec) ;


return 0 ;

}
