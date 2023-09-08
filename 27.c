#include<stdio.h>

int main()
{
int n, i ;
double sum = 0, num, avg;

printf("Enter How Many Numbers : ");
scanf("%d", &n);

for(i = 1; i <= n; i++)
{
printf(" num = ");
scanf("%lf", &num);
sum = sum + num;
}

avg = sum / n;
printf("\nThe Average of Numbers is : %0.2lf", avg);

return 0;

}
